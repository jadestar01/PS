#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec;

    for (int i = 0 ; i < 3; i++)
    {
        string value; cin >> value;

        bool isDigit = all_of(value.begin(), value.end(), ::isdigit);

        if (isDigit)
            vec.push_back(stoi(value));
        else
            vec.push_back(0);
    }

    int nextNumber = -1;
    for (int i = 0 ; i < 3; i++)
    {
        if (vec[i] == 0) continue;
        else
        {
            nextNumber = vec[i] + 3 - i;
            break;
        }
    }

    if (nextNumber % 3 != 0 &&
        nextNumber % 5 != 0)
        cout << nextNumber;
    else
    {
        if (nextNumber % 3 == 0)
            cout << "Fizz";
        if (nextNumber % 5 == 0)
            cout << "Buzz";
    }


    return 0;
}