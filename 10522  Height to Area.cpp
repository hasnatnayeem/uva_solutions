#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double H, area, ha, hb, hc;
    int n, counter;

    cin >> n;
    counter = 0;
    cout << fixed;
    cout << setprecision(3);

    while(cin >> ha >> hb >> hc)
    {
        ha = 1 / ha;
        hb = 1 / hb;
        hc = 1 / hc;

        H = (ha + hb + hc) / 2;

        area = 1 / (4 * sqrt(H * (H - ha) * (H - hb) * (H - hc)));
        if (isnan(area))
        {
            counter++;
            cout << "These are invalid inputs!" << endl;
            if (counter >= n)
                return 0;
        }
        else
            cout << area << endl;
    }
    return 0;
}
