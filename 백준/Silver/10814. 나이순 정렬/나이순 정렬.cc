#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Data
{
public:
    vector<vector<string>> vec;
    Data()
    {
        for (int i = 0 ; i < 201; i++)
        {
            vector<string> strVec;
            vec.push_back(strVec);
        }
    }

    void Add(int age, string name)
    {
        vec[age].push_back(name);
    }

    void PrintAll()
    {
        for (int i = 0; i < 201; i++)
        {
            if (vec[i].size() == 0) continue;

            for (int j = 0; j < vec[i].size(); j++)
                cout << i << " " << vec[i][j] << "\n";
        }
    }
};


int main()
{
    Data* data = new Data();

    int N; cin >> N;
    while (N-- > 0)
    {
        int age; string name;
        cin >> age >> name;
        data->Add(age, name);
    }

    data->PrintAll();

    return 0;
}