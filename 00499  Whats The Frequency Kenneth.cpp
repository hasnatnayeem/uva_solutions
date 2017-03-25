#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int i;
string s;
int ara[130];;

int maximum();

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while (getline(cin, s))
    {
        memset(ara, 0, sizeof(ara));

        for (i = 0; s[i] != '\0'; i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                ara[(int) s[i]]++;
            }
        }

        int maxfreq = maximum();
        for (i = 65; i < 123; i++)
        {
            if (ara[i] == maxfreq)
                cout << (char) i;
        }
        cout << " " << maxfreq << endl;
    }
    return 0;
}


int maximum()
{
    int maxfreq = 0;
    for (int i = 65; i < 123; i++)
    {
        if (ara[i] > maxfreq)
            maxfreq = ara[i];
    }
    return maxfreq;
}
