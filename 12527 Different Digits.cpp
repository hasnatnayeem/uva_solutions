#include <iostream>
#include <map>
using namespace std;

int check(int num)
{
    int i, temp;
    map<int, int> m;

    while (1)
    {
        temp = num % 10;
        if (m[temp] > 0)
            return 0;

        m[temp]++;

        num = num / 10;
        if (num == 0)
            return 1;
    }

}

map<int, int> m;

void initialize()
{
    for (int i = 1; i <= 5000; i++)
    {
        if (check(i))
            m[i] += (1 + m[i - 1]);
        else
            m[i] = m[i - 1];
    }
}

int main()
{
    int num, a, b;
    initialize();
    while (cin >> a >> b)
        cout << m[b] - m[a - 1] << endl;

    return 0;
}
