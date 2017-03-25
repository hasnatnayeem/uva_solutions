#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define PI 3.14159265

int main()
{
    double side, result;
    while (cin >> side)
    {
        result = (side / (sin(63 * PI / 180) * 1.0)) * sin(108 * PI / 180);
        cout << fixed;
        cout << setprecision(10) << result << endl;
    }
    return 0;
}
