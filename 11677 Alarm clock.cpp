#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int h1, m1, h2, m2, counter;
    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);

    while (cin >> h1 >> m1 >> h2 >> m2 && h1 | h2 | m1 | m2)
    {
        counter = 0;
        while ((h1 != h2) || (m1 != m2))
        {
            m1++;
            counter++;
            if (m1 == 60)
            {
                m1 = 0;
                h1++;
                if (h1 == 24)
                {
                    h1 = 0;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
