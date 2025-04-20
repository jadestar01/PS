#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    string str = to_string(N);
    int a = (str.size()) * 10; //반복 횟수
    int min = 0;

    for (int i = 0; i < a; i++)
    {
        int val = N - i;
        string s = to_string(val);
        int total = val;
        for (auto c : s)
            total += c - '0';

        if (total == N)
        {
            min = val;
        }
    }

    cout << min;

    return 0;
}