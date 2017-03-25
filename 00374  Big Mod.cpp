#include <iostream>
using namespace std;

long long int bigMod(int b, int p, int m)
{
    if(p == 0) return 1;

    if(p % 2 == 0)
    {
        long long c = bigMod(b, p / 2, m);
        return ((c % m) * (c % m)) % m;
    }
    else
    {
        return ((b % m) * bigMod(b, p - 1, m)) % m;
    }
}

int main()
{
    int b, p ,m;
    while(cin >> b >> p >> m)
        cout << bigMod(b, p, m) << "\n";

    return 0;
}
