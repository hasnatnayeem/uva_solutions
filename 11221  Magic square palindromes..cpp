#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;

int valid(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

int main()
{
    int i, length, temp, cases, p, q, r, s, counter, flag, strict;
    string str;
   freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    cin >> cases;
    cin.ignore();

    for (i = 1; i <= cases; i++)
    {
        getline(cin, str);

        string dummy = "";
        for (p = length = 0; str[p] != '\0'; p++)
            if (valid(str[p]))
            {
                dummy += str[p];
                length++;
            }

        temp = sqrt(length);

        str = dummy;

        cout << "Case #" << i << ":" << endl;

        if (temp * temp != length)
        {
            cout << "No magic :(" << endl;
            continue;
        }

//        for (p = strict = 0, r = length - 1; p < (temp + 1) / 2; p++, r--)
//        {
//            for (q = p, s = r, counter = 0, flag = 1; counter < temp; q += temp, s -= temp, counter++)
//            {
//                if (str[q] != str[s])
//                {
//                    flag = 0;
//                    strict = 1;
//                    break;
//                }
//            }
//            if (strict)
//                break;
//        }
        flag = 1;
        if (flag)
        {
            for (p = strict = 0, q = length - 1; p <= q; p++, q--)
            {
                if (str[p] != str[q])
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag)
            cout << temp << endl;
        else
            cout << "No magic :(" << endl;

    }
    return 0;
}
