#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);
	double result, balance, cases, fraction;
	int num, temp, i, k;

	cin >> cases;
	for (k = 1; k <= cases; k++)
	{
        result = 0;
        i = 12;
        while (i--)
        {
            cin >> balance;
            result += balance;
        }
        result /= 12;

        num = (int) result;
        fraction = result - num;

        cout << k << " $";

        if (num > 999)
        {
            temp = num % 1000;
            num = num / 1000;
            cout << num << "," << fixed << setprecision(2) << temp + fraction << endl;
        }
        else
        {
            cout << fixed << setprecision(2) << num + fraction << endl;
        }
	}
	return 0;
}
