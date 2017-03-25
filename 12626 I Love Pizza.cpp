#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
    string s;
    int i, minimum, cases;
    char c;
    char arr[] = {'M', 'A', 'R', 'G', 'I', 'T'};
    freopen("in.txt", "r", stdin);

    cin >> cases;
    scanf("%d", &c);
    while (cases--)
    {
        getline(cin, s);
        map<char, int> m;

        for (int i = 0; s[i] != '\0'; i++)
            m[s[i]]++;

        m['A'] = m['A'] / 3;
        m['R'] = m['R'] / 2;

        for (i = 0, minimum = 605; i < 6; i++)
        {
            if (m[arr[i]] < minimum)
                minimum = m[arr[i]];
        }
        cout << minimum << endl;
    }
    return 0;
}
