#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec(10001, 0);
    int N; cin >> N;

    while(N-- > 0)
    {
        int M; cin >> M;
        vec[M]++;
    }

    for (int i = 0 ; i < vec.size(); i++)
        for (int j = 0; j < vec[i]; j++)
            cout << i << "\n";

    return 0;
}