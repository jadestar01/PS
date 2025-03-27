#include <string>
#include <iostream>

using namespace std;

int main()
{
    string input = "";
    int X = 0;
    cin >> input; X =stoi(input) / 4;

    for (int i = 0 ; i < X; ++i)
        cout << "long ";
    cout << "int";
}