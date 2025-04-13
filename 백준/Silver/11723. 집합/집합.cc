#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

vector<bool> S(20, false);

void Add(int index)
{
    index--;
    S[index] = true;
}

void Remove(int index)
{
    index--;
    S[index] = false;
}

void Check(int index)
{
    index--;
    if (S[index]) cout << "1\n";
    else cout << "0\n";
}

void Toggle(int index)
{
    index--;
    S[index] = !S[index];
}

void All()
{
    for (int i = 0; i < S.size(); i++)
        S[i] = true;
}

void Empty()
{
    for (int i = 0; i < S.size(); i++)
        S[i] = false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;

    while(N-- > 0)
    {
        string input;
        int target;
        cin >> input;

        if (input == "all") All();
        else if (input == "empty") Empty();
        else
        {
            cin >> target;
            if (input == "add") Add(target);
            else if (input == "remove") Remove(target);
            else if (input == "check") Check(target);
            else if (input == "toggle") Toggle(target);
        }
    }

    return 0;
}