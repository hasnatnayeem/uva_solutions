#include <iostream>
#include <cmath>
#include <iomanip>
#define PI acos(-1)

using namespace std;

int main()
{
    double length, width, radius, rec_area, cir_area;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> length;
        width = (length * 6) / 10.0;
        radius = (length * 2) / 10.0;
        rec_area = length * width;
        cir_area = PI * radius * radius;
        cout << setprecision(2) << fixed;
        cout << cir_area << " " << rec_area - cir_area << endl;

    }
    return 0;
}
