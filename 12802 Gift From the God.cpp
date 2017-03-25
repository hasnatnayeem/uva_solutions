#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int palindrome (int n)
{
    int temp = n, num = 0;
    while (1)
    {
        num = (num * 10) + temp % 10;
        temp /= 10;
        if (!temp)
            break;
    }

    if (num == n)
        return 1;
    else
        return 0;
}

int prime(int num)
{
    int i, sqr;
    if (num == 2 || num == 1)
        return 1;
    if (num % 2 == 0)
        return 0;

    sqr = sqrt(num);

    for (i = 3; i <= sqr; i += 2)
        if (num % i == 0)
            return 0;
    return 1;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int num;
    while (cin >> num)
    {
        cout << num * 2 << endl;
        if (prime(num) && palindrome(num))
            break;
    }
    return 0;
}
