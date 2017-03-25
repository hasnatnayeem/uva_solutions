#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

map <int, string> m;

void initialize()
{
    m[0] = " ";
    m[1] = ".,?\"";
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
}


int main()
{
    int cases, temp, length, i;

    //freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    initialize();
    cin >> cases;
    while (cases--)
    {
        cin >> length;
        int key[length], stroke[length];

        for (i = 0; i < length; i++)
            cin >> key[i];
        for (i = 0; i < length; i++)
            cin >> stroke[i];

        for (i = 0; i < length; i++)
            cout << m[key[i]][stroke[i] - 1];
        cout << endl;

    }
    return 0;
}
