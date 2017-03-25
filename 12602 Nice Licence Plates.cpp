#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    int cases, num1, num2, i;
    string s;
    cin >> cases;
    while (cases--)
    {
        cin >> s;
        num1 = (s[0] - 'A') * pow(26,2) + (s[1] - 'A') * pow(26,1) + (s[2] - 'A') * pow(26,0);

        for (i = 4, num2 = 0; i < 8; i++)
            num2 = (num2 * 10) + s[i] - '0';

        num1 = num1 - num2;

        num1 < 0 ? num1 *= -1: num1;

        num1 > 100 ? s = "not nice" : s = "nice";

        cout << s << endl;
    }
    return 0;
}
