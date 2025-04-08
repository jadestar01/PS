#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string a, string b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    
    return a < b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    
    vector<string> vec;

    while (N-- > 0)
    {
        string S; cin >> S;
        if (find(vec.begin(), vec.end(), S) == vec.end())
            vec.push_back(S);
    }

    sort(vec.begin(), vec.end(), compare);

    for (auto s : vec)
        cout << s << "\n";

    return 0;
}