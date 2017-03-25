#include <iostream>
#include <cstdio>
using namespace std;

string validate(string s)
{
    string str = "";
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == '-')
        {
            str += s[i];
        }
    }
    return str;
}

void print(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            cout << (char) (s[i] + 32);
        else
            cout << s[i];
    }
    cout << endl;
}

int main()
{
    string s, str;
    int maximum = 0, l;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while (cin >> s && s != "E-N-D")
    {
        s = validate(s);
        l = s.length();
        if (l > maximum)
        {
            str = s;
            maximum = l;
        }
    }
    print(str);
    return 0;
}
