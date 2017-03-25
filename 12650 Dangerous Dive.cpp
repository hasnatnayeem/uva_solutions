#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, r, t, i;
    while (cin >> n >> r)
    {
        vector<int> v(n);
        i = r;
        while (i--)
        {
            cin >> t;
            v[t - 1] = 1;
        }

        if (n == r)
            cout << "*\n";
        else
        {
            i = 0;
            while (i < n)
            {
                if (!v[i])
                    cout << i + 1 << " ";
                i++;
            }
            cout << endl;
        }
    }
    return 0;
}
