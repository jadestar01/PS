#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <iterator>

using namespace std;

map<string, string> m;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M; cin >> N >> M;
    while(N-- > 0)
    {
        string site, pw;
        cin >> site >> pw;
        m.insert({site, pw});
    }
    while(M-- > 0)
    {
        string site;
        cin >> site;
        cout << m.at(site) << '\n';
    }

    return 0;
}