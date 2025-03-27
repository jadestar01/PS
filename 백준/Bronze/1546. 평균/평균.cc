#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0; cin >> N;
    vector<int> grades(N, 0);

    double M = 0.0;
    for (auto& g : grades)
    {
        cin >> g;
        if ((double)g > M) M = (double)g;
    }

    double sum = 0.0;
    for (int i = 0; i < N; i++)
        sum += ((double)grades[i] / (double)M) * 100.0;

    cout << sum / (double)N;

    return 0;
}