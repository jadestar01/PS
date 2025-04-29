#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<int> vec(10, 0);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str; cin >> str;

    for (auto c : str)
    {
        int a = c - '0';
        if (a == 6) a = 9;
        vec[a]++;
    }

    int b = vec[9] / 2;
    vec[9] = vec[9] % 2;
    vec[9] += b;

    int maxValue = -1;
    for (int i = 0 ; i < vec.size(); i++)
    {
        if (maxValue < vec[i])
            maxValue = vec[i];
    }

    cout << maxValue;

    return 0;
}