#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int sides;
    double radius, area, height, base, angle;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    while (cin >> radius >> sides)
    {
        angle = (sides - 2) * 180;
        angle = (angle / (sides * 1.0)) / 2.0;
        height = radius * sin(angle * M_PI/180.0);
        base = 2 * (radius * cos(angle * M_PI/180.0));
        area = .5 * base * height * sides;
        cout << fixed << setprecision(3) << area << endl;
    }
    return 0;
}
