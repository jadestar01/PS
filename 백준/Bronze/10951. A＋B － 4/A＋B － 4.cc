#include <string>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input = "";

    while(1)
    {
        int x = 0, y = 0;
        cin >> input; if(cin.eof()) return 0; x = stoi(input);
        cin >> input; if(cin.eof()) return 0; y = stoi(input);
        cout << x + y << '\n';
    }
}