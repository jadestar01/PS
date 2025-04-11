#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

vector<int> vec;

long long int total = 0;

int GetRound(double d)
{
    if (round(d) == -0)
        return 0;
    return round(d);
}

void GetAverage()
{
    cout << GetRound(total / (float)vec.size()) << "\n";
}

void GetMiddle()
{
    cout << vec[(vec.size() / 2)] << "\n";
}

void GetBindo()
{
    int A[8001] = { 0, };
    for (auto v : vec)
        A[v+4000]++;

    int max = 0;
    for (auto a : A)
        if (a != 0 &&
            a > max)
            max = a;

    int first = 999999;
    int second = 999999;
    for (int i = 0 ; i < 8001; i++)
        if (A[i] == max)
        {
            if (first == 999999)
                first = i;
            else
            {
                second = i;
                break;
            }
        }
    
    if (second == 999999) cout << first - 4000 << "\n";
    else cout << second - 4000 << "\n";
}

void GetGap()
{
    int val = vec[0] - vec[vec.size() - 1];
    if (val < 0) val *= -1;
    cout << val << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;

    while(N-- > 0)
    {
        int M; cin >> M;
        vec.push_back(M);
        total += M;
    }

    sort(vec.begin(), vec.end());

    GetAverage();
    GetMiddle();
    GetBindo();
    GetGap();

    return 0;
}