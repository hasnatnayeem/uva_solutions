#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    int created[12], needed[12], reserve, temp;
    freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);

    while (cin >> reserve & reserve != -1)
    {
        for (int i = 0; i < 12; i++)
            cin >> created[i];
        int p = 12;
        while (p--)
        {
            cin >> temp;
            if (temp <= reserve)
                cout << "No problem! :D" << endl;
            else
                cout << "No problem! :(" << endl;
            reserve += temp;
        }
    }

    return 0;
}
