#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<string, int> map;
    vector<string> vec;

    //삽입
    int N; cin >> N;
    int M; cin >> M;
    int index = 1;
    while(N--)
    {
        string str; cin >> str;
        map.insert({str, index});
        vec.push_back(str);
        index++;
    }

    while(M--)
    {
        string input; cin >> input;
        if (isdigit(input[0]))
            cout << vec[stoi(input) - 1] << "\n";
        else
            cout << map[input] << "\n";
    }


    return 0;
}