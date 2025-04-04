#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    while(1)
    {
        vector<char> vec;
        string input;
        getline(cin, input);

        if (input == "." || input == ".\n") break;
        if (input.back() == '.')
        {
            bool flag = true;

            for (auto a : input)
            {
                if (a == '(' || a == '[')
                    vec.push_back(a);
                if (a == ')')
                {
                    if (vec.size() != 0 &&
                        vec[vec.size() - 1] == '(')
                        vec.pop_back();
                    else
                    {
                        flag = false;
                        break;
                    }
                }
    
                if (a == ']')
                {
                    if (vec.size() != 0 &&
                        vec[vec.size() - 1] == '[')
                        vec.pop_back();
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
    
            if (flag)
            {
                if (vec.size() == 0)
                    cout << "yes\n";
                else
                    cout << "no\n";
            }
            else cout << "no\n";
        }
        else
        {
            cout << "no\n";
        }
    }

    return 0;
}