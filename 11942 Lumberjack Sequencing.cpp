#include <iostream>
using namespace std;
int main()
{
    int t, ara[10], i, group, counter = 0;
    cin >> t;
    while(t--)
    {
        counter++;
        for(i = 0; i < 10; i++)
        {
            cin >> ara[i];
        }

        if (ara[0] < ara[1])
        {
            for(i = 1; i < 9; i++)
            {
                if(ara[i] < ara[i + 1])
                {
                    group = 1;
                }
                else
                {
                    group = 2;
                    break;
                }
            }
        }
        else
        {
            for(i = 1; i < 9; i++)
            {
                if(ara[i] > ara[i + 1])
                {
                    group = 1;
                }
                else
                {
                    group = 2;
                    break;
                }
            }
        }

        if(counter == 1)
        {
            cout << "Lumberjacks:\n";
        }

        if(group == 1)
        {
            cout << "Ordered\n";
        }
        else
        {
            cout << "Unordered\n";
        }
    }
    return 0;
}
