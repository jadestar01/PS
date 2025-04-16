#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int Hour, Minute;
    cin >> Hour >> Minute;

    Minute += Hour * 60;
    Minute -= 45;
    if (Minute < 0)
        Minute += 60 * 24;

    cout << Minute / 60 << " " << Minute % 60;

    return 0;
}