#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N; cin >> N;
    int cnt = 0;
    int i = 665;
    string str;

    while (cnt != N)
    {
        str = to_string(i);
        if (string::npos != str.find("666"))
            cnt++;

        i++;
    }

    cout << str << "\n";

    return 0;
}