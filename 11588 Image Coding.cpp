#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int row, col, m, n, cases, i, j, k, maximum;
    int v[26];
    char c;

    cin >> cases;
    for (i = 1; i <= cases; i++)
    {
        cin >> row >> col >> m >> n;
        memset(v, 0, sizeof(v));
        for (j = 0; j < row; j++)
        {
            for (k = 0; k< col; k++)
            {
                cin >> c;
                v[c - 'A']++;
            }
        }
        sort(v, v + 26);

        maximum = v[25];
        for (k = j = 0; k < 26; k++)
        {
            if (v[k] == maximum)
            {
                j += v[k] * m;
            }
            else
            {
                j += v[k] * n;
            }
        }
        cout << "Case " << i << ": " << j << endl;
    }

    return 0;
}
