#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int length, num, temp, i, k, cases;
    string s;
    cin >> cases;
    while (cases--)
    {
        cin >> s;
        length = s.length();
        num = temp = 0;
        for (i = length - 1, k = 0; i >= 0; i--, k++)
        {
            num += ((s[i] - '0') * pow(10, k));
            temp += pow((s[i] - '0'), length);
        }

        if (num == temp)
            cout << "Armstrong" << endl;
        else
            cout << "Not Armstrong" << endl;
    }
    return 0;
}
