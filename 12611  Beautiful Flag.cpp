
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int length, width, TC, m1, m2, m3, radius;

    cin >> TC;

    for (int i = 1; i <= TC; i++)
    {
        cin >> radius;
        length = radius * 5;
        width = length * (60 / 100.0);
        m1 = (length * (45 / 100.0));
        m2 = width * .5;
        m3 = (length * (55 / 100.0));

        cout << "Case " << i << ":" << endl << -1 * m1 << " " << m2 << endl << m3 << " " << m2 << endl;
        cout << m3 << " " << -1 * m2 << endl << -1 * m1 << " " << -1 * m2 << endl;
    }
    return 0;
}
