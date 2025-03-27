#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    int min = 1000000, max = -1000000;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int input = 0;
        cin >> input;
        if (input > max) max = input;
        if (input < min) min = input;
    }

    cout << min << " " << max;

    return 0; 
}