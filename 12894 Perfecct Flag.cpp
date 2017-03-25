#include <iostream>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int cases, a, b, c, d, e, f, r, length, width;
    cin >> cases;

    while (cases--)
    {
        cin >> a >> b >> c >> d >> e >> f >> r;
        length = c - a;
        width = d - b;
        e = e - a;
        f = d - f;

        if ((length * (3 / 5.0)) == width && (length * .20) == r && ((length * .45) == e) && ((width * .5) == f))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
