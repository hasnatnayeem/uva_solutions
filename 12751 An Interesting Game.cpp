#include <iostream>
#include <cstdio>
using namespace std;

int summation(int num)
{
    return (num * (num + 1)) / 2;
}

int main()
{
    //freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int cases, i, n, k ,x;
    cin >> cases;

    for (i = 1; i <= cases; i++)
    {
        cin >> n >> k >> x;
        cout << "Case " << i << ": " << summation(n) - summation(k + x - 1) + summation(x - 1)  << endl;
    }
    return 0;
}

