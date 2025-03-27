#include <iostream>

using namespace std;

int main()
{
    int index = 0, max = 0;

    for (int i = 0 ; i < 10; ++i)
    {
        int input = 0; cin >> input;
        if (input > max)
        {
            max = input;
            index = i;
        }
    }

    cout << max << '\n' << index + 1;

    return 0;
}