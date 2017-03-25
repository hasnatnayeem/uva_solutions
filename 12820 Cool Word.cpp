#include <cstdio>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int ff(int r[])
{
    int p = 0;
    while (!r[p])
        p++;
    return p;
}

int main()
{
    int w, i, c = 0, counter, r[26], k, flag;
    string s;

    while (cin >> w)
    {
        counter = 0;
        while (w--)
        {
            memset(r, 0, sizeof(r));
            cin >> s;
            for (k = 0; s[k] != '\0'; k++)
            {
                r[s[k] - 'a']++;
            }

            sort(r, r + 26);

            k = ff(r) + 1;

            if (k == 26) flag = 0;
            else
            {
                for (flag = 1; k < 26; k++)
                {
                    if (r[k] == r[k - 1])
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag) counter++;
        }
        cout << "Case " << ++c << ": " << counter << endl;
    }
    return 0;
}
