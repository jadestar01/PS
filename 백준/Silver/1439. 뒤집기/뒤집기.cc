#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    char cur = ' ';
    int zero = 0;
    int one = 0;

    for (auto c : str)
    {
        if (cur != c)
        {
            if (c == '1')
                one++;
            if (c == '0')
                zero++;
            cur = c;
        }

    }

    if (zero >= one) cout << one;
    else cout << zero;

    return 0;
}