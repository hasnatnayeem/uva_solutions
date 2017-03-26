#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

#define MAX 800
int res_size;

int multiply(int x, int res[], int res_size);

void factorial(int n, int res[])
{
    res[0] = 1;
    res_size = 1;

    for (int x = 2; x <= n; x++)
    {
        res_size = multiply(x, res, res_size);
    }
}


int multiply(int x, int res[], int res_size)
{
    int carry = 0, prod, i;

    for (i = 0; i < res_size; i++)
    {
        prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int num;
    while (cin >> num && num)
    {
        int res[MAX], i;
        int counter[10] = {0};
        res_size = 0;
        factorial(num, res);

        for (i = 0; i < res_size; i++)
            counter[res[i]]++;

        cout << num << "! --\n";
        for (i = 0; i < 10; i++)
        {
           cout << setw(5) << "(" << i << ")" << setw(5) << counter[i];
           if (i == 4 || i == 9) cout << endl;
        }
    }

    return 0;
}
