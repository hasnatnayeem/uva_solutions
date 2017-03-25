#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

int main()
{

    int cases, i, temp, pagerank, maximum;
    string s;
//    freopen("in.txt", "r", stdin);

    cin >> cases;
    for (i = 1; i <= cases; i++)
    {
        map <int, string> m;
        temp = 10;
        maximum = 0;
        while (temp--)
        {
            cin >> s >> pagerank;

            if (pagerank > maximum)
                maximum = pagerank;

            if (m[pagerank].length() > 0)
                m[pagerank] += ("\n" + s);
            else
                m[pagerank] = s;
        }
        cout << "Case #" << i << ":" << endl << m[maximum] << endl;
    }
    return 0;
}
