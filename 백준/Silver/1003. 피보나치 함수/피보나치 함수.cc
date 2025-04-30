#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<long long int> zero(41, 0);
vector<long long int> one(41, 0);


void fibonacci(int n) {
    if (n == 0 || n == 1) return;
    
    zero[n] = zero[n - 1] + zero[n - 2];
    one[n] = one[n - 1] + one[n - 2];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    zero[0] = 1;
    one[1] = 1;

    for (int i = 0 ; i < zero.size(); i++)
        fibonacci(i);

    int N; cin >> N;
    while (N--)
    {
        int M; cin >> M;
        cout << zero[M] << " " << one[M] << "\n";
    }

    return 0;
}