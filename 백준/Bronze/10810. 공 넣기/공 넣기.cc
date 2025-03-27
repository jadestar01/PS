#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0; cin >> N;    //Length
    int M = 0; cin >> M;    //Count
    vector<int> vec(N, 0);

    for (int i = 0 ; i < M; i++)
    {
        int I = 0; cin >> I;
        int J = 0; cin >> J;
        int K = 0; cin >> K;

        for (int i = I; i <= J; i++)
            vec[i - 1] = K;
    }

    for (auto i : vec) cout << i << " ";

    return 0;
}