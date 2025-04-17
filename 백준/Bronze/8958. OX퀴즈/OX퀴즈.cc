#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    while (N--)
    {
        int total = 0;
        int cnt = 0;
        string input; cin >> input;
        for (auto i : input)
        {
            cnt++;
            if (i == 'O')
                total += cnt;
            else if (i == 'X')
                cnt = 0;
        }

        cout << total << "\n";
    }

    return 0;
}