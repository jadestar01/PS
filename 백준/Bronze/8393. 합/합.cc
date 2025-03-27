#include <string>
#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    string input = "";
    int n = 0;

    cin >> input;
    n = stoi(input);

    for (int i = 1; i <= n; ++i)
        total += i;

    cout << total;
}