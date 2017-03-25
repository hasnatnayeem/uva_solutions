#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b, c, d, i, l, counter;
    //freopen("in.txt", "r", stdin);
    while (cin >> a >> b >> c >> d >> l && a | b | c | d | l)
    {
        for (i = counter = 0; i <= l; i++)
            if (((a * i * i) + (b * i) + c) % d == 0)
                counter++;
        cout << counter << endl;
    }
    return 0;
}
