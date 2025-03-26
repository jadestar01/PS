#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    cout << n;
    if (n & 1) cout << " is odd";
    else cout << " is even";
    
    return 0;
}