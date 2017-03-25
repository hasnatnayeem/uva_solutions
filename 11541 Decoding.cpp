#include <iostream>
using namespace std;

int ischar(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int main()
{
    string s;
    int cases, n, p, i;
    char c;

    cin >> cases;

    for (p = 1; p <= cases; p++)
    {
        cin >> s;
        n = 1;
        cout << "Case " << p << ": ";
        for (i = 0; s[i] != '\0'; i++)
        {
            if (ischar(s[i]))
            {
                c = s[i];
                n = (s[i + 1] - '0');
                i += 2;
                while (s[i] != '\0' && ischar(s[i]) == 0)
                {
                    n = (n * 10) + (s[i] - '0');
                    i++;
                }
                i--;
                while (n--)
                    cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}
