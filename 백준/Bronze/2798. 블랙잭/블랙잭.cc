#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> cards;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M; cin >> N >> M;
    while (N--)
    {
        int card; cin >> card;
        cards.push_back(card);
    }

    int currentTop = 0;

    for (int i = 0 ; i < cards.size(); i++)
    {
        for (int j = i + 1 ; j < cards.size(); j++)
        {
            for (int k = j + 1; k < cards.size(); k++)
            {
                int sum = cards[i] +
                          cards[j] + 
                          cards[k];

                if (M - sum >= 0 &&
                    currentTop < sum)
                    currentTop = sum;
            }
        }
    }

    cout << currentTop;

    return 0;
}