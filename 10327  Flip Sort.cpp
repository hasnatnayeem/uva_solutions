#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i, j, temp, counter, t;
    int n[1010];

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    while (cin >> t)
    {
        for (i = 0; i < t; i++)
        {
            cin >> n[i];
        }

        for (i = counter = 0; i < t - 1; i++)
        {
            for (j = 0; j < t - 1; j++)
            {
                if (n[j] > n[j+1])
                {
                    temp = n[j];
                    n[j] = n[j + 1];
                    n[j+1] = temp;
                    counter++;
                }
            }
        }
        cout << "Minimum exchange operations : " << counter << endl;
    }
   return 0;
}
