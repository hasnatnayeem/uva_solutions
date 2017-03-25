#include <iostream>
#include <cstdio>
#include <math.h>
#include <iomanip>
using namespace std;


int main()
{
    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int cases;
    double x, y, r, sq;
    cin >> cases;

    while (cases--)
    {
        cin >> x >> y >> r;
        sq = sqrt(x * x + y * y);
        x = 100;
        cout << fixed << setprecision(2) << r - sq << " " << r + sq << endl;
    }
        return 0;
}

