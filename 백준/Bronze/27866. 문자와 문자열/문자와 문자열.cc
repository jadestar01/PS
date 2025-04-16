#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str; cin >> str;
    int num;    cin >> num;

    cout << str.c_str()[num - 1];


    return 0;
}