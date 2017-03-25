#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int temp, cases, flag, problems, i;
    //freopen("in.txt", "r", stdin);
    cin >> cases;
    for (i = 1; i <= cases; i++)
    {
        flag = 1;
        problems = 13;
        while (problems--)
        {
            cin >> temp;
            if (temp == 0)
                flag = 0;
        }

        cout << "Set #" << i << ": ";

        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
