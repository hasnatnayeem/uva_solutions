#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long n;
    int limit, counter, i = 1;
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    while (cin >> n >> limit && n >= 0 && limit >= 0)
    {
        cout << "Case " << i << ": A = " << n << ", limit = " << limit << ", number of terms = ";
        counter = 1;

        while (n != 1)
        {
            if (n % 2 == 0)
                n = n / 2;
            else
                n = n * 3 + 1;

            if (n > limit)
                break;

            counter++;
        }
        cout << counter << endl;
        i++;
    }
    return 0;
}
