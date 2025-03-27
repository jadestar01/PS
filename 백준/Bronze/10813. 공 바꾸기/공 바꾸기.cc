#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0; cin >> N;    //Length
    int M = 0; cin >> M;    //Count
    vector<int> vec;
    for (int i = 0 ; i < N; i++)
        vec.push_back(i + 1);

    for (int i = 0 ; i < M; i++)
    {
        int I = 0; cin >> I;
        int J = 0; cin >> J;
        int T = 0;

        T = vec[I - 1];
        vec[I - 1] = vec[J - 1];
        vec[J - 1] = T;
    }

    for (auto i : vec) cout << i << " ";

    return 0;
}