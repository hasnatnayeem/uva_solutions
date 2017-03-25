#include <iostream>
#include <sstream>
#include <iterator>
#include <vector>
#include <iomanip>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    string s;
    int t, r1, r2, TC;
    double res, pi = 2 * acos(0);
    char c;

    cin >> TC;
    scanf("%c", &c);

    cout << fixed;
    cout << setprecision(4);
    while (TC--)
    {
        getline(cin, s );
        istringstream is( s );
        vector<int> v( ( std::istream_iterator<int>( is ) ), std::istream_iterator<int>() );
        if (v.size() == 1)
        {
            t = v[0];
            r1 = t / 4;
            r2 = r1;
            res = pi * (((t/2.0) * (t/2.0)) - ((t/4.0) * (t/4.0) * 2));
        }
        else
        {
            r1 = v[0];
            r2 = v[1];
            res = pi * (((r1 + r2) * (r1 + r2)) - (r1 * r1) - (r2 * r2));
        }
        cout << res << endl;
    }
    return 0;
}
