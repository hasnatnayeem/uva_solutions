#include <iostream>
#include <cstdio>
#include <math.h>
#include <iomanip>
using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
   return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

int main()
{
    double a, b, c, p1, p2, p3, q1, q2, q3, PI, temp;
    PI = acos(-1);

    //freopen("in.txt", "r", stdin);

    while (cin >> p1 >> q1 >> p2 >> q2 >> p3 >> q3)
    {
        a = distance(p1, q1, p2, q2);
        b = distance(p2, q2, p3, q3);
        c = distance(p3, q3, p1, q1);

        temp = (a * b * c) / sqrt((a + b + c) * ( a + b -c)* ( b + c - a)* ( c + a - b));

        cout << fixed << setprecision(2) << 2 * PI  * temp << endl;
    }
    return 0;
}
