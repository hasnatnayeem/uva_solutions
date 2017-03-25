#include <iostream>
#include <cstdio>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    double PI, radius, yellow, blue, red, s;
    PI = acos(-1);
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    while (cin >> a >> b >> c)
    {
        s = (a + b + c) * .5;
        blue = sqrt(s * (s - a) * (s - b) * (s - c));

        radius = (a * b * c) / (sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b)));
        yellow = PI * radius * radius;

        radius = blue / s;
        red = PI * radius * radius;

        cout << fixed << setprecision(4) << yellow - blue << " " << blue - red << " " << red << endl;
    }
    return 0;
}
