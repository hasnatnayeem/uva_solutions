#include <cstdio>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> primes;

int isPrime(int n)
{
    int p, sqr;
    if (n == 2) return 1;

    if (n % 2 == 0) return 0;

    sqr = sqrt(n);

    for (p = 3; p <= sqr; p += 2)
        if (n % p == 0)
            return 0;
    return 1;
}

int initialize()
{
    int i, j;

    for (i = 2, j = 0; i < 46345; i++)
    {
        if (isPrime(i))
        {
            j++;
            primes.push_back(i);
        }
    }
}

void factorize(int num)
{
    int j, flag = 0, sq;
    vector<int> v;

    cout << num << " = ";

    if (num < 0)
    {
        cout << "-1";
        num = - num;
        flag = 1;
    }

    j = 0;
    sq = sqrt(num);

    while (primes[j] <= sq && j < 4792)
    {
        while (num % primes[j] == 0)
        {
            if (flag)
                cout << " x " << primes[j];
            else
                cout << primes[j];
            flag = 1;
            num = num / primes[j];
        }
        j++;
    }

    if (num > 1)
    {
        if (flag)
            cout << " x " << num;
        else
            cout << num;
    }
    cout << endl;
}

int main()
{
    int n;
    initialize();
    while (scanf("%d", &n) && n)
    factorize(n);
}

