#include <iostream>
using namespace std;

char tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}

int main()
{
    string s;
    int i, flag;
    char c;

    while (getline(cin, s) && s[0] != '*')
    {
        c = tolower(s[0]);
        int length = s.length();
        for (i = flag = 1; i < length - 1; i++)
        {
            if (s[i] == ' ')
            {
                if (tolower(s[i + 1]) != c)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}


