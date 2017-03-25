#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int group, i, start, stop, length;
    string s;

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while (cin >> group && group)
    {
        cin >> s;
        length = s.length() / group;
        start = 0;
        stop = length;

        while (group--)
        {
            for (int p = stop - 1; p >= start; p--)
                cout << s[p];
            start = stop;
            stop += length;
        }
        cout << endl;
    }
}
