#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int GetA(int num1, int num2)
{
    int a = 1;

    int max = num1 > num2 ? num1 : num2;

    int val = 0;
    while (max--)
    {
        if (num1 % a == 0 &&
            num2 % a == 0)
            val = a;

        a++;
    }

    return val;
}

int GetB(int num1, int num2)
{
    int max = num1 > num2 ? num1 : num2;

    while (1)
    {
        if (max % num1 == 0 &&
            max % num2 == 0)
            return max;

        max++;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M; cin >> N >> M;
    cout << GetA(N, M) << "\n" << GetB(N, M);

    return 0;
}