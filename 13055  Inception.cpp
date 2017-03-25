#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int query, top;
    string command, name;
    //freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    while (cin >> query)
    {
        vector<string> v;
        top = -1;
        while (query--)
        {
            cin >> command;
            if (command[0] == 'S')
            {
                cin >> name;
                v.push_back(name);
                top++;
            }

            else if (command[0] == 'T')
            {
                if (top != -1)
                {
                    cout << v[top] << endl;
                }
                else
                    cout << "Not in a dream" << endl;
            }

            else
            {
                if (top >= 0)
                {
                    v.erase(v.begin() + top);
                    top--;
                }
            }

        }
    }
    return 0;
}


