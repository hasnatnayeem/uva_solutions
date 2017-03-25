#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

map<char, int> m;

void initialize()
{
    m['B'] = 1;
    m['F'] = 1;
    m['P'] = 1;
    m['V'] = 1;

    m['C'] = 2;
    m['G'] = 2;
    m['J'] = 2;
    m['K'] = 2;
    m['Q'] = 2;
    m['S'] = 2;
    m['X'] = 2;
    m['Z'] = 2;

    m['D'] = 3;
    m['T'] = 3;

    m['L'] = 4;

    m['M'] = 5;
    m['N'] = 5;

    m['R'] = 6;
}



int main()
{
    //freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    string s;
    int i;
    char last;
    initialize();
    while (cin >> s)
    {
        for (i = 0, last = '0'; s[i] != '\0'; i++)
        {
            if (m[last] != m[s[i]] && m[s[i]] != 0)
            {
                cout << m[s[i]];
            }
            last = s[i];
        }
        cout << endl;
    }
    return 0;
}


