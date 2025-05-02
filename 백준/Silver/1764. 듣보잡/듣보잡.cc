#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_set>

using namespace std;

unordered_set<string> set;
vector<string> vec;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M; cin >> N >> M;
    while(N--)
    {
        string str; cin >> str;
        set.insert(str);
    }
    while(M--)
    {
        string str; cin >> str;
        if (set.find(str) != set.end())
            vec.push_back(str);
    }

    sort(vec.begin(), vec.end());

    cout << vec.size() << "\n";
    for(auto s : vec)
        cout << s << "\n";

    return 0;
}