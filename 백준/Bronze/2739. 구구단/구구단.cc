#include <iostream>

using namespace std;

int main()
{
    int cnt = 0;

    cin >> cnt;

    for (int i = 1 ; i < 10; i++)
        cout << cnt << " * " << i << " = " << i*cnt << endl;
        
    return 0;
}