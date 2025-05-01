#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<int> values;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M; cin >> N >> M;

    while (N--)
    {
        int value; cin >> value;
        values.push_back(value);        
    }
    sort(values.begin(), values.end(), compare);

    int index = 0;
    int total = 0;
    while (M != 0)
    {
        int cnt = M / values[index];
        if (cnt != 0)
        {
            M -= values[index] * cnt;
            total += cnt;
        }
        index++;
    }

    cout << total;

    return 0;
}