#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

char GetValue(string s)
{
    if (s.compare("black") == 0) return '0';
    else if (s.compare("brown") == 0) return '1';
    else if (s.compare("red") == 0) return '2';
    else if (s.compare("orange") == 0) return '3';
    else if (s.compare("yellow") == 0) return '4';
    else if (s.compare("green") == 0) return '5';
    else if (s.compare("blue") == 0) return '6';
    else if (s.compare("violet") == 0) return '7';
    else if (s.compare("grey") == 0) return '8';
    else if (s.compare("white") == 0) return '9';
    else
        return '-';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string v1, v2, v3;
    cin >> v1 >> v2 >> v3;

    string result = "";
    if (GetValue(v1) != '0')
        result += GetValue(v1);
    result += GetValue(v2);
    char ch = GetValue(v3);

    int iter = (int)(ch - '0');

    //반복하지 않아야 할 때는 둘다 0인 경우
    if (GetValue(v1) != '0' ||
        GetValue(v2) != '0')
        for (int i = 0; i < iter; i++)
            result += '0';

    cout << result;

    return 0;
}