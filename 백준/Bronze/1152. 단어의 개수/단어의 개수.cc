#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    string str;
    int sum = 0;
    while(cin >> str)
        sum++;

    cout << sum;

    return 0;
}