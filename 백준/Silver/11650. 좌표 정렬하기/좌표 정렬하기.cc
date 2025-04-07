#include <iostream>
#include <vector>
#include <algorithm>

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
    if (a.x == b.x)
        return a.y < b.y;
    else
        return a.x < b.x;
}

vector<Pos> vec;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    while (N-- > 0)
    {
        int x; int y;
        cin >> x >> y;
        Pos pos(x, y);

        vec.push_back(pos);
    }

    sort(vec.begin(), vec.end(), compare);

    for (auto a : vec)
        a.Print();

    return 0;
}