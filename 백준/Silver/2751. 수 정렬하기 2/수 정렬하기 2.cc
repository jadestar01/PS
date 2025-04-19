#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;

    vector<int> vec;
    while (N--)
    {
        int v; cin >> v;
        vec.push_back(v);
    }

    sort(vec.begin(), vec.end());
    for (auto v : vec)
        cout << v << "\n";

    return 0;
}