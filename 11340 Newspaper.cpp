#include <iostream>
#include <cstdio>
#include <map>
#include <iomanip>
using namespace std;

int main()
{
    int cases, lines, paidchar, value, sum, i;
    char c;
    //freopen("in.txt", "r", stdin);

    cin >> cases;
    while (cases--)
    {
        string s = "";
        map <char, int> m;

        cin >> paidchar;
        while (paidchar--)
        {
            cin >> c >> value;
            m[c] = value;
        }

        cin >> lines;
        scanf("%d", &c);

        sum = 0;
        while (lines--)
        {
            getline(cin, s);

            for (i = 0; s[i] != '\0'; i++)
            {
                sum += m[s[i]];
            }
        }
        cout << fixed << setprecision(2) << sum / 100.0 << "$" << endl;
    }
    return 0;
}
