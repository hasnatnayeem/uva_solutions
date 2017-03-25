#include <iostream>
#include <vector>
using namespace std;

main()
{
    int n, m , operation, limit, temp, consumed, maximum, l;


    while (cin >> n >> m >> limit && n | m | limit)
    {
        vector <int> status, capacity, op;
        consumed = maximum = 0;

        while (n--)
        {
            cin >> temp;
            capacity.push_back(temp);
            status.push_back(0);
        }

        while (operation--)
        {
            cin >> temp;
            op.push_back(temp);
        }

        l = operation;

        while (operation--)
        {
            cin >> temp;
            op.push_back(temp);
        }

        for (int i = 0; i < l; i++)
        {
            temp = op[i] - 1;

            if (status[temp] == 0)
            {
                status[temp] = 1;
                consumed += capacity[temp];

                if (consumed > maximum)
                    maximum = consumed;
                if (consumed > limit)
                {
                    cout << "break";
                    break;
                }
            }

            else
            {
                consumed -= capacity[temp];
                status[temp] = 1;
            }
        }



    }
    return 0;
}
