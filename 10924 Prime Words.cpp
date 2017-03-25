#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num == 2)
    {
        return 1;
    }
    if (num % 2 == 0)
    {
        return 0;
    }

    for(int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string str;
    int value, i;
    while (cin >> str)
    {
        value = 0;
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                value += (int(str[i]) - 96);
            }
            else
            {
                value += (int(str[i]) - 38);
            }
        }

        if (isPrime(value))
        {
            cout << "It is a prime word." << endl;
        }
        else
        {
            cout << "It is not a prime word." << endl;
        }
    }
    return 0;
}
