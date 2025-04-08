#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Pos
{
    public:
        int x;
        int y;

    Pos(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    void Print()
    {
        cout << x << " " << y << "\n";
    }
};

bool compare(Pos a, Pos b)
{
    if (a.y == b.y)
        return a.x < b.x;
    
    return a.y < b.y;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    
    vector<Pos> vec;

    while (N-- > 0)
    {
        int x, y; cin >> x >> y;
        vec.push_back(Pos(x, y));
    }

    sort(vec.begin(), vec.end(), compare);

    for (auto s : vec)
        s.Print();

    return 0;
}