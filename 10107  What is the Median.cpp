#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int i, m, l, p;
    vector <int> v;

    //freopen("in.txt", "r", stdin);

    l = 1;
    while (cin >> m)
    {
        v.push_back(m);
        sort(v.begin(), v.end());

        if (l % 2 == 0)
        {
            m = (v[(l / 2) - 1]+ v[(l / 2)]) / 2;
        }
        else
        {
            m = v[((l + 1) / 2) - 1];
        }
        cout << m << endl;
        l++;
    }
    return 0;
}
