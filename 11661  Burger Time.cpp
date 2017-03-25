#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
    int length, minimum, lastR, lastD, i;


    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    while (cin >> length && length)
    {
        minimum = length;
        lastR = lastD = -length;
        int s[length];
        for (i = 0; i < length; i++)
        {
            cin >> s[i];
            cout << s[i];
        }

        for (i = 0; i < length; i++)
        {
            if (s[i] == 'Z')
            {
                minimum = 0;
                break;
            }
            else if (s[i] == 'R')
            {
                minimum = min(minimum, i - lastD);
                lastR = i;
            }
            else if (s[i] == 'D')
            {
                minimum = min(minimum, i - lastR);
                lastD = i;
            }
        }
        cout << minimum << endl;
    }
    return 0;
}
