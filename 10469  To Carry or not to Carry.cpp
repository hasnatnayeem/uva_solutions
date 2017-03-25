#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1, n2, store1[32], store2[32], counter;
    while(cin >> n1 >> n2)
    {
        int result = 0;
        for(int i = 31; i >= 0; i--)
        {
            store1[i] = 0;
            store2[i] = 0;
        }

        counter = 31;

        while(1)
        {
            store1[counter] = n1 % 2;
            counter--;
            if(n1 / 2 == 0)
                break;
            n1 = n1 / 2;
        }

        counter = 31;

        while(1)
        {
            store2[counter] = n2 % 2;
            counter--;
            if(n2 / 2 == 0)
                break;
            n2 = n2 / 2;
        }



        for(int i = 31, counter = 0; i >= 0; i--)
        {
            if(store1[i] == store2[i])
            {
                store1[i] = 0;
            }
            else
            {
                store1[i] = 1;
            }

            result += (store1[i]  * pow(2, counter));
            counter++;
        }

        cout << result << "\n";
    }
    return 0;
}
