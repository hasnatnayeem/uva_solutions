#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int station, temp, flag, length, limit, i, last;

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while (cin >> station && station)
    {
        vector<int> v;

        while (station--)
        {
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());
        last = v[v.size() - 1];
        length = v.size();

        for (i = flag = 1, limit = 200; i < length; i++)
        {
            temp = (v[i] - v[i - 1]);
            if (temp > limit)
            {
                flag = 0;
                break;
            }
        }

        limit = limit - (1422 - last);

        if (flag && (1422 - last > limit))
        {
            flag = 0;
        }

        if (flag)
            cout << "POSSIBLE" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
