#include <string>
#include <iostream>

using namespace std;

int main()
{
    string input = "";
    int X = 0;
    int N = 0;
    long long T = 0;

    cin >> input; X = stoi(input);
    cin >> input; N = stoi(input);

    for (int i = 0 ; i < N; i++)
    {
        int cost = 0;
        int count = 0;
        cin >> input; cost = stoi(input);
        cin >> input; count = stoi(input);

        T += cost * count;
    }

    if (X == T) cout << "Yes";
    else cout << "No";
}