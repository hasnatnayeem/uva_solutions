#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    //freopen("in.txt", "r" ,stdin);
   // freopen("out.txt", "w" ,stdout);

    int i, sum;
    string s;

    while (getline(cin, s))
    {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        if (s[0] == '0' && s[1] == '\0')
            break;

        sum = 0;

        for (i = 0; i < s.size(); i += 2)
            sum += (s[i] - '0');
        for (i = 1; i < s.size(); i += 2)
            sum -= (s[i] - '0');

        if (sum % 11 == 0)
            cout << s << " is a multiple of 11." << endl;
        else
            cout << s << " is not a multiple of 11." << endl;
    }
    return 0;
}
