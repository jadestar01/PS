#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int result;
    vector<int> vec(10, 0);

    int A, B, C; cin >> A >> B >> C;
    result = A * B * C;

    for (auto c : to_string(result))
        vec[c - '0']++;

    for (auto v : vec)
        cout << v << "\n";

    return 0;
}