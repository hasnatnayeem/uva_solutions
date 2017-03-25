#include <iostream>
#include <math.h>

using namespace std;

int hexadecimal(int num)
{
    int hexa = 0, i;
    i = 0;
    while (1)
    {
        hexa += (num % 10) * pow(16, i);
        i++;
        num = num / 10;
        if (num == 0)
            return hexa;
    }
}

int ones(int num, int base)
{
    int one = 0;
    while (1)
    {
        if (num % base == 1)
        {
            one++;
        }
        num = num / base;
        if (num == 0)
            return one;
    }
}

int main()
{
    int num, cases, b1, b2;
    cin >> cases;

    while (cases--)
    {
        cin >> num;
        cout << ones(num, 2) << " " << ones(hexadecimal(num), 2) << endl;
    }

    return 0;
}
