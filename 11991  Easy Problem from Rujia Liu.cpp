#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n, i, query, k, num, index, temp;
    vector< vector<int> > v;

//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    while (scanf("%d %d", &n, &query) != EOF)
    {
        v.assign(1000000, vector<int>());

        for (i = 0; i < n; i++)
        {
            scanf("%d", &temp);
            v[temp].push_back(i);
        }

        while (query--)
        {
            scanf("%d %d", &k, &num);
            if (k <= v[num].size())
                printf("%d\n", v[num][k - 1] + 1);
            else
                printf("0\n");
        }
    }
    return 0;
}
