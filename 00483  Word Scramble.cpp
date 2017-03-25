#include <iostream>
using namespace std;

void reversePrint(string s)
{
    for (int p = s.length() - 1; p >= 0; p--)
        cout << s[p];
}

int main()
{
    string str;

    while (getline(cin, str))
    {
        string s = "";
        for (int i = 0; str[i] != 0; i++)
        {
            if (str[i] == ' ')
            {
                reversePrint(s);
                cout << " ";
                s.clear();
            }
            else
                s += str[i];
        }
        reversePrint(s);
        cout << endl;
    }
    return 0;
}



