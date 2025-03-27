#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<bool> vec(30, false);

    for (int i = 0 ; i < 28; i++)
    {
        int input = 0; cin >> input;
        vec[input - 1] = true;
    }

    for (int i = 0; i < 30; i++)
        if (!vec[i]) cout << i+1 << '\n';

    return 0;
}