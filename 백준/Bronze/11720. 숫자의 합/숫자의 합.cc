#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    int sum = 0;
    while(N--)
    {
        char ch; cin >> ch;
        sum += ch - '0';
    }

    cout << sum;

    return 0;
}