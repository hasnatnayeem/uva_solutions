#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int players, matches, counter, result, i, flag, temp;
    while (cin >> players >> matches)
    {
        counter = 0;
        result = 0;
        flag = 1;
        while (players--)
        {
            i = matches;
            while (i--)
            {
                cin >> temp;
                if (temp == 0)
                    flag = 0;
            }
            counter += flag;
            flag = 1;
        }
        cout << counter << endl;
    }
    return 0;
}
