#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int pairs, query;
    string s;
    map<string, string> m;

    cin >> pairs;
    cin.ignore();

    while(pairs--)
    {
        getline(cin, s);
        getline(cin, m[s]);
    }

    cin >> query;
    cin.ignore();

    while (query--)
    {
        getline(cin, s);
        cout << m[s] << endl;
    }

    return 0;
}
