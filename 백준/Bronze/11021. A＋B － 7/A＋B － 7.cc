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

    for (int i = 0 ; i < cnt; i++)
    {
        int x = 0; int y = 0;

        cin >> input; x = stoi(input);
        cin >> input; y = stoi(input);
        cout << "Case #" << i+1 << ": " << x + y << '\n';
    }
}