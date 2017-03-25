#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int hour, minute, TC;
    char c;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin >> TC;
    while (TC--)
    {
        cin >> hour >> c >> minute;

        if (hour == 12 && minute > 0)
        {
            hour--;
            minute = 60 - minute;
        }
        else
        {
            minute = (720 - ((hour * 60) + minute));
            hour = minute / 60;
            minute = minute - hour * 60;

            if (hour == 0)
                hour = 12;
        }


        if (hour < 10)
            cout << "0" << hour << ":";
        else
            cout << hour << ":";

        if (minute < 10)
            cout << "0" << minute << endl;
        else
            cout << minute << endl;
    }
    return 0;
}
