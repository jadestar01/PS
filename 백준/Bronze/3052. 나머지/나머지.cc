#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(10, 0);
    vector<int> count;
    int cnt;


    for (int i = 0 ; i < vec.size(); i++)
    {
        int input = 0; cin >> input;
        int val = input % 42;
        vec[i] = val;

        bool isContains = false;
        for (int i = 0 ; i < count.size(); i++)
        {
            if (count[i] == val)
            {
                isContains = true;
                break;
            }
        }
        if (!isContains)
            count.push_back(val);
    }

    cout << count.size();

    return 0;
}