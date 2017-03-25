#include <iostream>
using namespace std;
int main()
{
    int i, roads, integers, total_numbers, flag, counter;
    i = 0;
    while(cin >> roads >> integers)
    {
        i++;

        if(roads < 1 && integers < 1)
        {
            return 0;
        }

        counter = 0;

        if(roads <= integers)
        {
            flag = 1;
        }
        else
        {
            total_numbers = integers;
            while(counter < 26)
            {
                counter++;
                total_numbers += integers;
                if(roads <= total_numbers)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                }
            }
        }

        if(flag == 1)
        {
            cout << "Case " << i << ": " << counter << endl;
        }
        else
        {
            cout << "Case " << i << ": " << "impossible\n";
        }
    }
    return 0;
}
