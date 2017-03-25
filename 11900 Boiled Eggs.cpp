#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    int n, p, q, i, counter, cases, eggs, temp, limit;
    int weight[32];
    //freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);

    cin >> cases;
    for (i = 1; i <= cases; i++)
    {
        cin >> n >> p >> q;
        memset(weight, 0, sizeof(weight));

        for (int j = 1; j <= n; j++)
        {
            cin >> temp;
            weight[j] = weight[j - 1] + temp;
        }

        limit  = (n < p) ? n : p;
        counter = 0;
        for (int j = 1; j <= limit; j++)
        {
            if (weight[j] <= q)
                counter++;
            else
                break;
        }

        cout << "Case " << i << ": " << counter << endl;
    }

    return 0;
}
