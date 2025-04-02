#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int C = 0; cin >> C;
    vector<int> W;
    vector<int> H;
    vector<int> S;

    while(C-- > 0)
    {
        int w, h;
        cin >> w >> h;
        
        W.push_back(w);
        H.push_back(h);
        S.push_back(0);
    }

    for (int i = 0; i < S.size(); i++)
    {
        int cnt = 1;

        for (int j = 0; j < S.size(); j++)
        {
            if (i == j) continue;
            if (W[i] < W[j] &&
                H[i] < H[j])
            {
                cnt++;
            }
        }
        
        S[i] = cnt;
    }

    for (auto s : S)
        cout << s << " ";

    return 0;
}