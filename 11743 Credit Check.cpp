#include <cstdio>
#include <iostream>
using namespace std;


// Running time could be improved by caching the sum of the digits   5 *2 = 10  sum = 1

int sum(int num)
{
    int res = 0;
    while (1)
    {
        res += num % 10;
        num /= 10;
        if (num == 0)
            return res;
    }
}

int main()
{
    int N, i, res;
    string q, r, s, t;
    cin >> N;
    while (N--)
    {
        cin >> q >> r >> s >> t;
        s = q + r + s + t;
        res = 0;

        for (i = 0; i < 16; i += 2)
            res += sum((s[i] - '0') * 2);

        for (i = 1; i < 16; i += 2)
            res += sum(s[i] - '0');

        res % 10 == 0 ? s = "Valid": s = "Invalid";
        cout << s << endl;
    }
    return 0;
}
