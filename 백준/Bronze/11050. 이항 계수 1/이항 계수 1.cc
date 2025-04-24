#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int fact(int);

int fact(int val)
{
    if (val == 0 ||
        val == 1) return 1;
    else return val * fact(val - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int top, bot; cin >> top >> bot;

    cout << fact(top) / ((fact(top - bot)) * fact(bot));

    return 0;
}