#include <string>
#include <iostream>

using namespace std;

int main()
{
    string input;
    int T =0;
    
    getline(cin, input);
    T = stoi(input);

    for (int i = 0; i < T; ++i)
    {
        int operand1 = 0, operand2 = 0;
        cin >> input; operand1 = stoi(input);
        cin >> input; operand2 = stoi(input);

        cout << operand1 + operand2 << '\n';
    }
}