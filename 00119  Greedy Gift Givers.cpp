#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    int p, give, money, people, i, counter = 1;
    string p_name, s;
    while (cin >> p)
    {
        vector<string> person;
        map<string, int> got, given;

        i = p;
        while (i--)
        {
            cin >> s;
            person.push_back(s);
        }

        i = p;
        while (i--)
        {
            cin >> s >> money >> people;
            if (people > 0)
            {
                give = money / people;
                given[s] += give * people;
            }

            while (people--)
            {
                cin >> s;
                got[s] += give;
            }
        }

        if (counter > 1)
        {
            cout << endl;
        }

        for (i = 0; i < p; i++)
        {
            cout << person[i] << " " << got[person[i]] - given[person[i]] << endl;
        }
        counter++;
    }
    return 0;
}
