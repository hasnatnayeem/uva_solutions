#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

#define reads() freopen("input.txt", "r", stdin)
#define writes() freopen("output.txt", "w", stdout)

using namespace std;

int main()
{
    int a1, b1, c1, a2, b2, c2, p, q, r;

//    reads();
//    writes();

    while (cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2)
    {
        if ((a1 + b1 + c1 + a2 + b2 + c2) == 0)
            break;

        r = (a1 * b2) - (b1 * a2);

        if (!r)
        {
            cout << "No fixed point exists." << endl;
        }
        else
        {
            p = (b2 * c1) - (b1 * c2);
            q = (a1 * c2) - (a2 * c1);
            cout << fixed << setprecision(2) << "The fixed point is at " << (double) p / r << " " << (double) q / r << "." <<endl;
        }
    }
    return 0;
}
