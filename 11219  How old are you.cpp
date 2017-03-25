#include <iostream>
#include <cstdio>
using namespace std;

int d1, d2, m1, m2, y1, y2;
int age;

int check()
{
    int rd, rm, ry;
    if (d1 < d2)
    {
        m1--;
        d1 += 30;
    }
    rd = d1 - d2;

    if (m1 < m2)
    {
        y1--;
        m1 += 12;
    }
    rm = m1 - m2;

    if (y1 < y2)
    {
        return 1;
    }

    age = y1 - y2;

    if (age > 130)
        return 3;
    else if (age == 0)
        return 5;

    return -1;
}

int main()
{
    int TC, flag;
    char c;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin >> TC;
    for (int i = 1; i <= TC; i++)
    {
        cin >> d1 >> c >> m1 >> c >> y1;
        cin >> d2 >> c >> m2 >> c >> y2;
        age = 0;
        flag = check();

        cout << "Case " << "#" << i << ": ";

        if (flag == 5)
            cout << "0" << endl;
        else if (flag  == 1)
            cout << "Invalid birth date" << endl;
        else if (flag  == 3)
            cout << "Check birth date" << endl;
        else
            cout << age << endl;
    }
    return 0;
}

