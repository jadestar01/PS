#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

vector<int> vec;

void Push(int val)
{
    vec.push_back(val);
}

void Pop()
{
    if (vec.size() == 0) cout << "-1\n";
    else
    {
        cout << vec[vec.size() - 1] << "\n";
        vec.pop_back();
    }
}

void Empty()
{
    if (vec.size() == 0) cout << "1\n";
    else                 cout << "0\n";
}

void Size()
{
    cout << vec.size() << "\n";
}

void Top()
{
    if (vec.size() == 0) cout << "-1\n";
    else                 cout << vec[vec.size() - 1] << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    
    while (N-- > 0)
    {
        string input; cin >> input;
        if (input == "push")
        {
            int val; cin >> val;
            Push(val);
        }
        else if (input == "pop")    Pop();
        else if (input == "size")   Size();
        else if (input == "empty")  Empty();
        else if (input == "top")    Top();
    }

    return 0;
}