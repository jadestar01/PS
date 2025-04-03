#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int T = 0; cin >> T;
    vector<vector<int>> vec;

    int total = 0;
    for (int i = 0; i < 15; i++)
    {
        // k = 0
        vector<int> list;
        for (int j = 0; j < 15; j++)
        {
            if (i == 0) list.push_back(j + 1);
            else
            {
                if (j == 0)
                    list.push_back(1);
                else
                {
                    int val = list[j-1] + vec[i-1][j];
                    list.push_back(val);
                }
            }
        }
        vec.push_back(list);
    }

    for (int i = 0; i < T; i++)
    {
        int K, N;
        cin >> K >> N;
        
        cout << vec[K][N-1] << '\n';
    }

    return 0;
}