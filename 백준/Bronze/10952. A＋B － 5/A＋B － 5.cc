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
        cin >> input; x = stoi(input);
        cin >> input; y = stoi(input);

        if (x + y == 0) return 0;

        cout << x + y << '\n';
    }
}