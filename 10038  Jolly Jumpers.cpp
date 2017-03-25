#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int a, n, i, flag, diff, temp;
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    while (cin >> n)
    {
        i = n;
        vector<int> v;
        vector<int> difference;
        while (i--)
        {
            cin >> a;
            v.push_back(a);
        }

        for (i = 1; i < n; i++)
        {
            temp = abs(v[i] - v[i - 1]);
            difference.push_back(temp);
        }

        sort(difference.begin(), difference.end());

        n--;

        for (i = 0, flag = 1; i < n; i++)
        {
            if (difference[i] != i + 1)
                flag = 0;
        }

        if (flag)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
    return 0;
}
