#include <iostream>
#include <cstdio>
using namespace std;



int isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    return 0;
}

int check(string s1, string s2)
{
    if (s1.length() != s2.length())
        return 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i] && (!isVowel(s1[i]) || !isVowel(s2[i])))
            return 0;
    }
    return 1;
}



int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int TC;
    string s1, s2;


    cin >> TC;

    while (TC--)
    {
        cin >> s1 >> s2;
        if (check(s1, s2))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
