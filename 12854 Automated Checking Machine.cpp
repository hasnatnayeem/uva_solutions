#include <iostream>
using namespace std;

int main()
{
    int p1[5], p2[5], i, flag;
    while (cin >> p1[0] >> p1[1] >> p1[2] >> p1[3] >> p1[4])
    {
        cin >> p2[0] >> p2[1] >> p2[2] >> p2[3] >> p2[4];
        for (i = 0, flag = 1; i < 5; i++)
        {
            if ((p1[i] + p2[i]) != 1)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
