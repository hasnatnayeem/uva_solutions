#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double h, u, d, f, fatigue, climbed;
    int day, flag;

//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    while (cin >> h >> u >> d >> f && h != 0)
    {
        day = 1;
        climbed = 0;
        fatigue = (f / 100.0) * u;

        while (1)
        {
            if (day < 2)
                climbed += u;
            else
            {
                u = u - fatigue;
                if ( u > 0)
                    climbed += u;
            }

            if (climbed > h)
            {
                flag = 1;
                break;
            }

            climbed -= d;

            if (climbed < 0)
            {
                flag = 0;
                break;
            }
            day++;
        }

        if (flag)
            cout << "success ";
        else
            cout << "failure ";
        cout << "on day " << day << endl;
    }
    return 0;
}
