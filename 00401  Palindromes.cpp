#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

map <char, char> m;

void initialize()
{
    m['A'] = 'A';
    m['E'] = '3';
    m['H'] = 'H';
    m['I'] = 'I';
    m['J'] = 'L';
    m['L'] = 'J';
    m['M'] = 'M';
    m['O'] = 'O';
    m['S'] = '2';
    m['T'] = 'T';
    m['U'] = 'U';
    m['V'] = 'V';
    m['W'] = 'W';
    m['X'] = 'X';
    m['Y'] = 'Y';
    m['Z'] = '5';
    m['1'] = '1';
    m['2'] = 'S';
    m['3'] = 'E';
    m['5'] = 'Z';
    m['8'] = '8';
}

int main()
{
    int p, mir, i, k, length;
    string s;
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    initialize();
    while (cin >> s)
    {
        p = mir = 1;
        length = s.length();
        for (i = 0, k = length - 1; i <= k; i++, k--)
        {
            if (s[i] != s[k])
            {
                p = 0;
            }
            if (m[s[i]] != s[k])
            {
                mir = 0;
            }
        }

        cout << s ;

        if (p && mir)
            cout << " -- is a mirrored palindrome." << endl;
        else if (p && !mir)
            cout << " -- is a regular palindrome." << endl;
        else if (!p && mir)
            cout << " -- is a mirrored string." << endl;
        else
            cout << " -- is not a palindrome." << endl;
        cout << endl;
    }
    return 0;
}



