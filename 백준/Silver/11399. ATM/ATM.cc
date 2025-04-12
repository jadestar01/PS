#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

vector<int> vec;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;

    while(N-- > 0)
    {
        int num; cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    long long int total = 0;
    long long int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
        total += sum;
    }

    cout << total;

    return 0;
}