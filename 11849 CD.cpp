#include <iostream>
#include <map>
using namespace std;

main()
{
    int n, m, temp, counter;

    while (cin >> n >> m && n | m)
    {
        map<int, int> t;
        counter = 0;
        while (n--)
        {
            cin >> temp;
            t[temp]++;
        }

        while (m--)
        {
            cin >> temp;
            if (t[temp] > 0)
                counter++;
        }
        cout << counter << endl;
    }
    return 0;
}
