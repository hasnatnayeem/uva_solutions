#include <iostream>
#include <cstdio>
#include <queue>

#define reads() freopen("input.txt", "r", stdin)
#define writes() freopen("output.txt", "w", stdout)

using namespace std;

int main()
{
    int i, n, l, temp, total;

    //reads();
    //writes();

    while (cin >> n && n)
    {
        priority_queue < int, vector<int>, greater<int> > q;
        total = 0;

        while (n--)
        {
            cin >> temp;
            q.push(temp);
        }

        temp = 0;
        while (q.size() > 1)
        {
            temp = q.top();
            q.pop();
            temp += q.top();
            q.pop();
            total += temp;
            q.push(temp);
        }
        cout << total << endl;
    }
    return 0;
}

/*

I submitted this version. It takes more time than the solution above.

int main()
{
    int i, n, l;
    vector<int> v;
    reads();
    writes();
    int temp;
    while (cin >> n && n)
    {
        v.clear();

        for (i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        temp = 0;
        while (n > 1)
        {
            l = v[0] + v[1];
            temp += l;
            v.erase(v.begin());
            v.erase(v.begin());
            v.push_back(l);
            n--;
            sort(v.begin(), v.end());
        }
        cout << temp << endl;
    }
    return 0;
}

*/

/*
