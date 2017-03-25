#include <iostream>
#include <cstdio>
#include <string.h>

#define reads() freopen("in.txt", "r", stdin)
#define writes() freopen("out.txt", "w", stdout)

using namespace std;

int check(int arr[], int value)
{
    int p = 0;
    int i = 0;
    while (p < 10001)
    {
        if (arr[p] > 0)
        {
            if (p == value)
                return i;
            i += arr[p];
        }
        p++;
    }
    return -1;
}

using namespace std;

int main() {
    int marble, query, counter, qcounter, temp, cases = 1, x, arr[10015];

    reads();
    writes();

    cases = 1;

    while (cin >> marble >> query && (marble | query))
    {
        memset(arr, 0, sizeof(arr));
        while (marble--)
        {
            cin >> temp;
            arr[temp]++;
        }

        cout << "CASE# " << cases << ":\n" ;
        while (query--)
        {
            cin >> temp;

            x = check(arr, temp);
            if (x != -1)
                cout << temp << " found at " << x + 1 << endl;
            else
                cout << temp << " not found" << endl;
        }
        cases++;
    }
  return 0;
}
