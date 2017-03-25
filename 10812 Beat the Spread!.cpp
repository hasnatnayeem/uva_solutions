#include <iostream>
using namespace std;

int main()
{
    int t, sum, dif;
    double x, y;
    cin >> t;
    while (t--)
    {
        cin >> sum >> dif;
        x = (sum + dif) / 2.0;
        y = (sum - dif) / 2.0;

        if ((int)x == x && (int)y == y && x > 0 && y > 0)
        {
            cout << x << " " << y << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }
    return 0;
}
