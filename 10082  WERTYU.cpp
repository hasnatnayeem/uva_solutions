#include <iostream>

using namespace std;

string keys = " 1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";

int findKey(char c)
{
    for(int i = 0; keys[i] != '\0'; i++)
    {
        if(keys[i] == c)
            return i;
    }
}

int main()
{
    int i = 0, result[10];
    string str;

    while (getline(cin, str))
    {
        for(int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == ' ')
                continue;
            str[i] = keys[findKey(str[i]) - 1];
        }
        cout << str << endl;
    }
    return 0;
}
