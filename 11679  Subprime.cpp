#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int bank, deb, i, dr, cr, rr;
    //freopen("in.txt", "r", stdin);

    while (cin >> bank >> deb && bank | deb)
    {
        int reserve[bank];

        for (i = 0; i < bank; i++)
            cin >> reserve[i];

        for (i = 0; i < deb; i++)
        {
            cin >> dr >> cr >> rr;
            reserve[dr - 1] -= rr;
            reserve[cr - 1] += rr;
        }


        for (i = 0; i < bank; i++)
        {
            if (reserve[i] < 0)
            {
                cout << "N" << endl;
                break;
            }
        }

        if (i == bank)
            cout << "S" << endl;
    }
    return 0;
}
