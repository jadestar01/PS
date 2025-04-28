#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec;
    int N; cin >> N;

    while (N--) {
        int v; cin >> v;
        vec.push_back(v);
    }
    sort(vec.begin(), vec.end());

    int total = 1;
    for (int i = 0 ; i < vec.size(); i++)
    { 
        if (total < vec[i])
            break;
        total += vec[i];
    }

    cout << total;

    return 0;
}