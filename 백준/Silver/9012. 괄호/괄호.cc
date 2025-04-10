#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;

    while(N-- > 0)
    {
        string s; cin >> s;
        int cnt = 0;
        bool flag = true;
        
        for(auto c : s)
        {
            switch (c)
            {
                case '(':
                    cnt++;
                break;

                case ')':
                    cnt--;
                    if (cnt < 0) flag = false;
                break;
            }
            if (!flag) break;
        }

        if (flag && cnt == 0)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}