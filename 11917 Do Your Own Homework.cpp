#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

main()
{
    int i, cases, sub, d, t;
    string s;

//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);


    cin >> cases;
    for (i = 1; i <= cases; i++)
    {
        map <string, int> m;

        cin >> sub;
        while (sub--)
        {
            cin >> s >> t;
            m[s] = t;
        }

        cin >> d;
        cin >> s;

        cout << "Case " << i << ":";

        if (m[s] <= d && m[s])
            cout << " Yesss";
        else if (m[s] <= d + 5 && m[s])
            cout << " Late";
        else
            cout << " Do your own homework!";
        cout << endl;

    }
    return 0;
}
