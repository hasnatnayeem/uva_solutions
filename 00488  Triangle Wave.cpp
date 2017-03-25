#include <iostream>
using namespace std;

int main()
{
    int amplitude, frequency, test, i, k, counter, temp = 0, flag = 0;
    cin >> test;
    for(int p = 1; p <= test; p++)
    {
        cin >> amplitude >> frequency;

        if(p > 1 && p <= test) cout << "\n";
        for(i = 1, flag = 1; i <= frequency; i++)
        {

            for(k = 1; k < amplitude; k++)
            {
                counter = k;
                while(counter--)
                {
                    cout << k;
                }
                cout << "\n";
            }

            for(k = amplitude; k > 0; k--)
            {
                counter = k;
                while(counter--)
                {
                    cout << k;
                }
                if (k == 1 && i == frequency == 1)cout << "";
                else cout << "\n";
            }


                cout << "\n";
                flag = 1;


        }

        if(i == frequency - 1) flag = 0;

        if (flag == 0) cout << "\n\n";
        flag = 1;


    }
    return 0;
}

