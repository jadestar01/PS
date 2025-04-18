#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T;

    while(T--)
    {
        int H, W, N;
        cin >> H >> W >> N; 
        int first = ((N-1) % H) + 1;
        int second = (N-1) / H + 1;
        string str = to_string(first);

        if (second >= 10) str += to_string(second);
        else
        {
            str += "0";
            str += to_string(second);
        }
        cout << str << "\n";
    }


    return 0;
}