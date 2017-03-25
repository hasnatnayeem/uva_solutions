#include <iostream>
#include <cstdio>

using namespace std;
int num, ones, length;

string binary(int num, string s)
{
    int i = 0, t;
    while (1)
    {
        t = num % 2;
        s += t + '0';
        if (t == 1)
            ones++;

        i++;
        num = num / 2;
        if (num == 0)
        {
            length = i;
            return s;
        }
    }
}

int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    while (cin >> num && num)
    {
        string s = "";
        ones = 0;
        length = 0;
        s = binary(num, s);

        cout << "The parity of ";

        for (int i = length - 1; i >= 0; i--)
            cout << s[i];

        cout << " is " << ones << " (mod 2)." << endl;
    }
    return 0;
}

