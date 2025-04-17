#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    while (N--)
    {
        int C;
        string str;
        cin >> C >> str;

        for (auto s : str)
            for(int i = 0; i < C; i++)
                cout << s;
        cout << "\n";
    }

    return 0;
}