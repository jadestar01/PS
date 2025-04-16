#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    switch (N / 10)
    {
        case 10:
        case 9:
            cout << "A";
            return 0;
        case 8:
            cout << "B";
            return 0;
        case 7:
            cout << "C";
            return 0;
        case 6:
            cout << "D";
            return 0;
        default:
            cout << "F";
            return 0;
    }

    return 0;
}