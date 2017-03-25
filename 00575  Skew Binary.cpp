#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string s;
    int result, i, length, k;
    while(cin >> s && s[0] - '0' != 0)
    {
        result = 0;
        for(i = 0; s[i] != '\0'; i++)
        {

        }
        length = i;

        for(i = length - 1, k = 1; i >= 0; i--, k++)
        {
            result += ((s[i] - '0') * (pow(2,k) - 1));
        }
        cout << result << "\n";
    }
    return 0;
}
