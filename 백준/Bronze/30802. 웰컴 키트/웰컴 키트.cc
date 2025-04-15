#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

vector<int> vec;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    int cloth = 0;

    for (int i = 0; i < 6; i++)
    {
        int input; cin >> input;
        vec.push_back(input);
    }

    int cnt_1, cnt_2; cin >> cnt_1 >> cnt_2;

    for (int i = 0 ; i < vec.size(); i++)
    {
        if (vec[i] == 0) continue;
        if (vec[i] % cnt_1 == 0) cloth += (vec[i] / cnt_1);
        else cloth += (vec[i] / cnt_1) + 1;
    }

    cout << cloth << "\n";
    cout << N / cnt_2 << " " << N % cnt_2;

    return 0;
}