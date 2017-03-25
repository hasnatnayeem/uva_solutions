#include <iostream>
#include <cstdio>
using namespace std;

int findchar(string s, char c)
{
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            return i - 2;
    return -1;
}

int main()
{
    //freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    string s = "zxcvbnm,./asdfghjkl;'qwertyuiop[]\"";
    string line;
    int temp;

    getline(cin, line);
    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] >= 'A' && line[i] <= 'Z')
            line[i] = line[i] - 'A' +'a';

        temp = findchar(s, line[i]);
        if (temp != -1)
            cout << s[temp];
        else
            cout << line[i];
    }
    cout << endl;

    return 0;
}
