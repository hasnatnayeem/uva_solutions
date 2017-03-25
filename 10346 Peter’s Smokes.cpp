#include <iostream>
using namespace std;

int main()
{
    int n, k, consumed, cig, butt, temp;
    while (cin >> n >> k)
    {
        consumed = butt = n;

        while (butt >= k)
        {
            cig = butt / k;
            consumed += cig;
            butt = butt % k + cig;
        }

        cout << consumed << endl;
    }
    return 0;
}
