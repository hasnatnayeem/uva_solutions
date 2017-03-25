#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;


int main()
{

    int hour, minute, diff;
    double temp1;
    char c;

    cout << fixed;
    cout << setprecision(3);

    while ((cin >> hour >> c >> minute) && (hour || minute))
    {
        hour = hour * 5;
        if (hour > minute)
            diff = 60 -hour + minute;
        else
            diff = minute - hour;

        temp1 = (diff * 6) - minute / 2.0;

        if (temp1 < 0)
                temp1 *= -1;
        else if (temp1 > 180)
            temp1 = 360 - temp1;

        cout << temp1 << endl;
    }
    return 0;
}
