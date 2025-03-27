#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0; cin >> N;
    int M = 0; cin >> M;
    vector<int> vec(N, 0);

    for (int i = 0 ; i < N; i++)
        vec[i] = i + 1;

    for (int i = 0; i < M; i++)
    {
        int I = 0; cin >> I; I--;
        int J = 0; cin >> J; J--;
        vector<int> c_vec;

        for (int j = J; j >= I; j--)
            c_vec.push_back(vec[j]);

        int cnt = 0;
        for (int j = I; j <= J; j++)
        {
            vec[j] = c_vec[cnt];
            cnt++;
        }
    }

    for (auto i : vec) cout << i << " ";

    return 0;
}