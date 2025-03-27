#include <string>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input = "";
    long long cnt = 0;
    cin >> input; cnt = stoi(input);

    for (int i = 1 ; i <= cnt; i++)
    {
        string s1(cnt - i, ' ');
        cout << s1;
        string s2(i, '*');
        cout << s2 << '\n';
    }
}