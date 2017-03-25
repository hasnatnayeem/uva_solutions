#include <iostream>
#include <cstdio>
using namespace std;

int number(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

main()
{
    string s;
    int counter = 0, a, b, c, p, q;
    char ch;

    //freopen("in.txt", "r", stdin);
    while (cin >> s)
    {
        int length = s.length();
        if (s[length - 1] != '?')
        {
            for (a = s[0] - '0', p = 1; number(s[p]) == 1; p++)
                a = a * 10 + (s[p] - '0');

            ch = s[p];

            for (b = s[p + 1] - '0', q = p + 2; number(s[q]) == 1; q++)
                b = (b * 10) + (s[q] - '0');

            c = s[q + 1] - '0';
            q += 2;

            while (s[q] != '\0')
            {
                c = (c * 10) + (s[q] - '0');
                q++;
            }

            if (ch == '+')
            {
                if (a + b == c)
                    counter++;
            }
            else
            {
                if (a - b == c)
                    counter++;
            }

        }
    }
    cout << counter << endl;
    return 0;
}
