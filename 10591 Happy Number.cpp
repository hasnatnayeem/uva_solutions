#include <iostream>
#include <cstdio>

using namespace std;

int check(int num)
{
    int temp, sum = 0;
    char c;

    while (1)
    {
        sum = 0;
        while (1)
        {
            temp = num % 10;

            sum += temp * temp;
            num = num / 10;
            if (num == 0)
                break;
        }

        if (sum < 10)
            return sum;
        else
            num = sum;
    }
}

int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int num, cases, i;
    cin >> cases;
    for (i = 1; i <= cases; i++)
    {
        cin >> num;
        if (check(num) == 1)
            cout << "Case #" << i << ": " << num << " is a Happy number." << endl;
        else
            cout << "Case #" << i << ": " << num << " is an Unhappy number." << endl;
    }
    return 0;
}

