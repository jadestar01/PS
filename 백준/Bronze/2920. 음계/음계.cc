#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int val;
    int last;
    for (int i = 0 ; i < 8 ; i++)
    {
        int input; cin >> input;
        if (i == 0)
            last = input;

        else if (i == 1)
        {
            if (last - input == -1 ||
                last - input == 1)
            {
                val = last - input;
                last = input;
            }
            else
            {
                cout << "mixed";
                return 0;
            }
        }

        else if (last - input != val)
        {
            cout << "mixed";
            return 0;
        }

        last = input;
    }

    if (val == -1) cout << "ascending";
    else cout << "descending";

    return 0;
}