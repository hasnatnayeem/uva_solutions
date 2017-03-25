#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    string s;
    int i = 1, q, low, high, temp, k, flag;

    while (cin >> s)
    {
        cin >> q;
        cout << "Case " << i << ":" << endl;
        i++;

        while (q--)
        {
            cin >> low >> high;
            if (low > high)
            {
                temp = low;
                low = high;
                high = temp;
            }

            for (k = low, flag = 1; k < high; k++)
            {
                if (s[k] != s[k + 1])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
