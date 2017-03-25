#include <iostream>
#include <cstdio>
#include <string.h>

#define reads() freopen("in.txt", "r", stdin)
#define writes() freopen("out.txt", "w", stdout)

using namespace std;

int main()
{
    int num, arr[104], i, counter, temp;

    reads();    writes();

    while (scanf("%d", & num) && num)
    {
        memset(arr, 0, sizeof(arr));
        while (num--)
        {
            scanf("%d", &temp);
            arr[temp]++;
        }

        for (i = 1, counter = 0; i < 101; i++)
        {
            while (arr[i])
            {
                if (counter > 0)
                    printf(" ");
                printf("%d", i);
                counter++;
                arr[i]--;
            }
        }
        printf("\n");
    }
    return 0;
}

