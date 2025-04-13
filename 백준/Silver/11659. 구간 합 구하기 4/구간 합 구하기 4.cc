#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec;
    vec.push_back(0);
    int N, M; cin >> N >> M;
    while(N-- > 0)
    {
        int input; cin >> input;
        vec.push_back(vec[vec.size() - 1] + input);
    }
    while(M-- > 0)
    {
        int start, end;
        cin >> start >> end;
        cout << vec[end] - vec[start - 1] << '\n';
    }

    return 0;
}