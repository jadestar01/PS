#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec;
    int N; cin >> N;

    if (N == 0)
    {
        cout << 0;
        return 0;
    }
    
    while(N-- > 0)
    {
        int V; cin >> V;
        vec.push_back(V);
    }

    sort(vec.begin(), vec.end());

    float result = 0;

    int num = (int)((vec.size() * 0.15) + 0.5);

    for (int i = num; i < vec.size() - num; i++)
    {
        result += vec[i];
    }

    result /= vec.size() - num * 2;
    
    cout << (int)(result + 0.5);

    return 0;
}