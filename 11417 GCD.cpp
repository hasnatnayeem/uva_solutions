#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int remainder = a % b;

    if (remainder == 0) {
        return b;
    }

    return gcd(b, remainder);
}

int main()
{
    int i, j, n, g;

    while (cin >> n && n)
    {
        g = 0;
        for(i = 1; i < n; i++)
        {
            for(j = i + 1; j <= n; j++)
            {
                g += gcd(i,j);
            }
        }
        cout << g << endl;
    }
    return 0;
}

