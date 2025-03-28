#include <iostream>
#include <string>

using namespace std;

int main()
{
    int total = 0;
    int loop = 5;

    while(loop--)
    {
        int input; cin >> input;
        total += input * input;
    }

    cout << total % 10;

    return 0;
}