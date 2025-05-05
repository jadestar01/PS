#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_set>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int top;
    string under;

    cin >> top >> under;

    cout << top * (under[2] - '0') << "\n";        
    cout << top * (under[1] - '0') << "\n";        
    cout << top * (under[0] - '0') << "\n";        


    cout << stoi(under) * top;

    return 0;
}