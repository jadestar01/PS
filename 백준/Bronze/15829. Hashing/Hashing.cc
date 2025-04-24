#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<unsigned long long int> target;
int R = 31;
unsigned long long int M = 1234567891;

void Hashing()
{
    unsigned long long int val = 0;
    for (int i = 0 ; i < target.size(); i++)
    {
        val += target[i];

        if (val >= M)
            val -= M;
    }

    cout << val;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int L; cin >> L;
    int coef = L;

    while (coef--)
    {
        char val; cin >> val;
        int v = (int)(val - 'a') + 1;
        int c = -1 * (coef + 1 - L);
        target.push_back(v * pow(R, c));
    }

    Hashing();

    return 0;
}