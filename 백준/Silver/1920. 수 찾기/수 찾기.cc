#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_set<int> uos;

    //삽입
    int N; cin >> N;
    while(N--)
    {
        int val; cin >> val;
        uos.insert(val);
    }

    int M; cin >> M;
    while(M--)
    {
        int val; cin >> val;
        if (uos.find(val) == uos.end())
            cout << "0\n";
        else
            cout << "1\n";
    }


    return 0;
}