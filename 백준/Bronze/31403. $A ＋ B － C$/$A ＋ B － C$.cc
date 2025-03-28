#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B, C; cin >> A; cin >> B; cin >> C;

    cout << (stoi(A)) + (stoi(B)) - (stoi(C)) << '\n';
    string AB = ""; AB += A; AB += B;
    cout << stoi(AB) - stoi(C);

    return 0;
}