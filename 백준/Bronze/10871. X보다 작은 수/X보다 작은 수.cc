#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0, X = 0;

    int input;
    vector<int> arr;

    cin >> N >> X;

    for (int i = 0 ; i < N ; i++)
    {
        cin >> input;
        arr.push_back(input);
    }

    for (auto v : arr)
        if (v < X)
            cout << v << " ";

    return 0; 
}