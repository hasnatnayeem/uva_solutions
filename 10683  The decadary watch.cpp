#include <cstdio>
#include <iostream>
using namespace std;

int num(string r, int start)
{
    int num = (r[start] - '0') * 10 + (r[start + 1] - '0');
    return num;
}

int main()
{
    string s;
    int time, x = 1;
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    while (cin >> s)
    {
        time = (((((num(s, 0) * 60) + num(s, 2)) * 60) + num(s, 4)) * 100) + num(s, 6);
        printf("%07d\n", (time * 125)/ 108);
    }
    return 0;
}
