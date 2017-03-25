#include <iostream>
#include <cstdio>
using namespace std;

char lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int valid(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return -1;
}

int main()
{
    int p, i, k, length;
    string s;
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    while (getline(cin, s) && s != "DONE")
    {
        p = 1;
        length = s.length();
        for (i = 0, k = length - 1; i <= k;)
        {
            if (valid(s[i]) != 1)
            {
                i++;
                continue;
            }
            if (valid(s[k]) != 1)
            {
                k--;
                continue;
            }
            if (lower(s[i]) != lower(s[k]))
            {
                p = 0;
                break;
            }
            //cout << s[i] << "--" << s[k] << endl;
            i++;
            k--;
        }

        if (p)
            cout << "You won't be eaten!" << endl;
        else
            cout << "Uh oh.." << endl;
    }
    return 0;
}
