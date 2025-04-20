#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    while (N != 0)
    {
        if (N / 10 == 0) cout << "yes\n";
        else
        {
            string str = to_string(N); 
            bool flag = true;
            for (int i = 0 ; i < str.size(); i++)
            {
                if (str[i] != str[str.size() - 1- i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag) cout << "yes\n";
            else cout << "no\n";
        }

        cin >> N;
    }
    

    return 0;
}