#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    long long A, B, V;
    cin >> A >> B >> V;

    long long L = 0;
    long long sum = A - B;

    if (V == A) cout << 1;
    else if ((V - A) % sum == 0) cout << (V-A) / sum + 1;
    else cout << (V-A) / sum + 2;

    return 0;
}