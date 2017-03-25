#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;

int sum(string s)
{
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }

        if ((s[i] >= 'a' && s[i] <= 'z'))
        {
            sum += (s[i] - 'a' + 1);
        }
    }
    return sum;
}

int reduce(int num)
{
    int sum = 0, p;
    p = num;

    if (num < 10)
        return num;

    while (p > 9)
    {
        sum = 0;
        while (1)
        {
            sum += (p - (p / 10) * 10);
            p = p / 10;
            if (p == 0)
            {
                p = sum;
                break;
            }
        }
    }
    return sum;
}

int main()
{
    string s1, s2;
    int sum1, sum2, temp;
    double res;

    while (getline(cin, s1))
    {
        getline(cin, s2);
        sum1 = reduce(sum(s1));
        sum2 = reduce(sum(s2));

        if (sum2 > sum1)
            res = sum1 / (sum2 * 1.0);
        else
            res = sum2 / (sum1 * 1.0);

        res = res * 100;

        if (!isnan(res))
            cout << fixed << setprecision(2) << res << " %" << endl;
        else
            cout << endl;
    }
    return 0;
}
