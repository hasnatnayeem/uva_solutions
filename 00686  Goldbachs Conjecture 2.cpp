#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int r[1000000];

void initialize()
{
    int limit = 1000000;
    int sq = sqrt(limit);
    int i, k;

    for (i = 0; i < limit; i++)
        r[i] = 1;

    for (i = 2 ; i <= sq; i++)
    {
        if (r[i] == 1)
        {
            k = i + i;
            while (k < limit)
            {
                r[k] = 0;

                k += i;
            }
        }
    }
}

int next(int i)
{
    i++;

    while (!r[i])
    {
        i++;
    }
    return i;
}

int prev(int i)
{
    i--;
    while (!r[i])
    {
        i--;
    }
    return i;
}


int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    initialize();
    r[1] = 0;
    int a, b, n, counter, limit,i;
    while (cin >> n && n)
    {
        a = counter = 0;
        b = prev(n);
        limit = n / 2;

        while (a <= limit && b >= limit)
        {
            if (a + b > n)
            {
                b = prev(b);
            }
            else if (a + b < n)
            {
                a = next(a);
            }
            else
            {
                counter++;
                a = next(a);
                b = prev(b);
            }
        }

        cout << counter << endl;
    }

    return 0;
}
