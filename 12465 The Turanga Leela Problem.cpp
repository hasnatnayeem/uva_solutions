#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int num1, num2 , counter, sqroot, diff, i;

    while (cin >> num1 >> num2 && num1 | num2)
    {
        counter = 0;
        diff = abs(num1 - num2);
        sqroot = sqrt(diff);
        for (i = 1; i <= sqroot; i++)
        {
            if (diff % i == 0)
                counter += 2;
        }
        if (sqroot * sqroot == diff)
            counter--;
        cout << counter << endl;
    }
    return 0;
}
