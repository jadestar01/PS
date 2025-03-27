#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cnt = 0;
    vector<int> vec;
    cin >> cnt;

    for (int i =0  ; i < cnt; i++)
    {
        int input = 0;
        cin >> input;
        vec.push_back(input);
    }

    int target = 0;
    int total = 0;
    cin >> target;

    for (auto v : vec)
        if (target == v)
            total++;

    cout << total;

    return 0; 
}