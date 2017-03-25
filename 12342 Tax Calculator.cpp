#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double rate[3] = {.10, .15, .20}, amount[3] = {300000, 400000, 300000}, tax;
    int money, i, temp, t = 0, cases;

//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    cin >> cases;
    while (cases--)
    {
        cin >> money;
        money -= 180000;
        tax = 0;

        for (i = 0; i < 3; i++)
        {
            if (money <= 0) break;

            temp = money - amount[i];

            if (temp > 0)
            {
                tax += amount[i] * rate[i];
                money -= amount[i];
            }
            else
            {
                tax += money * rate[i];
                money = 0;
            }
        }


        if (money > 0)
            tax += money * .25;

        if (tax > 0 && tax < 2000)
            tax = 2000;

        tax = ceil(tax);

        cout << "Case " << ++t << ": " << (int)tax << endl;
    }
    return 0;
}
