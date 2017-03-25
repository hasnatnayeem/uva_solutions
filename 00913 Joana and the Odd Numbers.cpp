#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long num, s, n;
    while (cin >> num)
    {
        n = (num - 1) / 2;
        s = (n * (2 + ((n - 1) * 2))) + 1;
        s = s + (num - 1) * 2;
        s = s * 3 - 6;
        cout << s << endl;
    }
    return 0;
}


