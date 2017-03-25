#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
//    freopen("in.txt", "r" ,stdin);
//    freopen("out.txt", "w" ,stdout);

    int num, i;

    while (cin >> num && num >= 0)
    {
        vector< int > v;
        while (1)
        {
            v.push_back(num % 3);
            num = num / 3;
            if (num == 0)
                break;
        }

        for (i = v.size() - 1; i >=  0; i--)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}

