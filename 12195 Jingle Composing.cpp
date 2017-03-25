#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s = "WHQESTX";
    map<char, double> value;
    int i, j, counter;
    double sum;

    //freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);

    while (cin >> s && s[0] != '*')
    {
        for (i = sum = counter = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '/')
            {
                if (sum == 1000000)
                {
                    counter++;
                }
                sum = 0;
            }
            else
            {
                switch (s[i])
                {
                    case 'W': sum += 1000000;break;
                    case 'H': sum +=  500000;break;
                    case 'Q': sum +=  250000;break;
                    case 'E': sum +=  125000;break;
                    case 'S': sum +=   62500;break;
                    case 'T': sum +=   31250;break;
                    case 'X': sum +=   15625;break;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
