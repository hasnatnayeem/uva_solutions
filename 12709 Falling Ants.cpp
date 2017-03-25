#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int T, x, y, z, volume, prev;
    while (cin >> T && T)
    {
        volume = prev = 0;
        while (T--)
        {
            cin >> x >> y >> z;

            if (z > prev)
            {
                volume = x * y * z;
                prev = z;
            }
            else if (z == prev)
            {
                volume = max(volume, x * y * z);
            }
        }
        cout << volume << endl;
    }
    return 0;
}
