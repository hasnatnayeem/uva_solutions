#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int b, w, t, a, i, n, TC, p;
    string s;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin >> TC;
    for (int p = 1; p <= TC; p++)
    {
        cin >> n;
        cin >> s;
        b = t = w = a = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                b++;
            else if (s[i] == 'W')
                w++;
            else if (s[i] == 'T')
                t++;
            else if (s[i] == 'A')
                a++;
        }

        cout << "Case " << p << ": ";

        if (b && w == 0 && t == 0)
            cout << "BANGLAWASH";
        else if (w && b == 0  && t == 0)
            cout << "WHITEWASH";
        else if (b > w)
            cout << "BANGLADESH " << b << " - " << w;
        else if (w > b)
            cout << "WWW " << w << " - " << b;
        else if (a == n)
            cout << "ABANDONED";
        else
            cout << "DRAW " << b << " " << t;
        cout << endl;
    }
    return 0;
}

