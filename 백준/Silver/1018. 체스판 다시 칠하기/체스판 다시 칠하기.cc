#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<bool>> board;
int minCnt = 100000;

int GetChangeCount(int x, int y, bool target)
{
    int cnt = 0;
    bool curTarget = target;

    for (int i = x; i < x + 8; i++)
    {
        for (int j = y; j < y + 8; j++)
        {
            if (board[i][j] != curTarget)
            {
                cnt++;
            }
            curTarget = !curTarget;
        }
        curTarget = !curTarget;

        if (minCnt < cnt) return 9999999;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M; cin >> N >> M ;
    char c = ' ';

    for (int i = 0 ; i < N; i++)
    {
        vector<bool> line;
        for (int j = 0 ; j < M; j++)
        {
            cin >> c;
            line.push_back(c == 'B');
        }
        board.push_back(line);
    }

    for (int i = 0 ; i < N - 7; i++)
        for (int j = 0 ; j < M - 7; j++)
        {
            int blackCnt = GetChangeCount(i, j, true);
            if (minCnt > blackCnt) minCnt = blackCnt;

            int whiteCnt = GetChangeCount(i, j, false);
            if (minCnt > whiteCnt) minCnt = whiteCnt;
        }

    cout << minCnt;

    return 0;
}