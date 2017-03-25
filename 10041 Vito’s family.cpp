#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int cases, relative, sum, temp, high, low;
    cin >> cases;

    while (cases--)
    {
        sum = 0;
        cin >> relative;
        int r[relative];

        for (int i = 0; i < relative; i++)
            cin >> r[i];

        sort(r, r + relative);

        for (low = 0, high = relative - 1; low < high; low++, high--)
        {
            temp = r[high] - r[low];
            sum += temp;
        }
        cout << sum << endl;
    }
    return 0;
}

