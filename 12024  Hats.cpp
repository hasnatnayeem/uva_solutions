#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int cases, i, n, fact[13];

    for (i = 1, fact[0] = 1; i < 13; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    cin >> cases;

    while (cases--)
    {
        cin >> n;
        cout << (int) round(exp (-1) * fact[n]) << "/" << fact[n] << endl;
    }
    return 0;
}
