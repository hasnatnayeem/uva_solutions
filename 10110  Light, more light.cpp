#include <cstdio>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    unsigned num, i, flag, num2;
    while (scanf("%d", &num) && num)
    {
        num2 = (int) sqrt(num);
        num2 *= num2;

        num == num2 ? flag = 1 : flag = 0;

        flag == 1 ? printf("yes\n") : printf("no\n");
    }
    return 0;
}
