#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec(26, -1);

    string str; cin >> str;

    int pos = 0;
    for (auto c : str)
    {
        int index = c - 'a';
        if (vec[index] == -1)
            vec[index] = pos;

        pos++;
    }

    for (auto v : vec)
        cout << v << " ";

    return 0;
}