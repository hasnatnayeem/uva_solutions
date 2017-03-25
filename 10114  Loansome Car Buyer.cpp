#include <iostream>

using namespace std;

int main()
{
    int ara[104], flag;
    double ara2[104];
    int i, j, month, dep, counter;
    double owed, downpayment, car_price, dep_rate[104];

    while(cin >> month >> downpayment >> owed >> dep)
    {
        if(month < 0)
            return 0;

        for(i = 0; i < dep; i++)
        {
            cin >> ara[i] >> ara2[i];

            for(j = ara[i]; j <= month; j++)
            {
                dep_rate[j] = ara2[i];
            }
        }

        car_price = downpayment + owed;
        downpayment = owed / month;

        for(i = 0; i <= month; i++)
        {
            car_price = car_price - car_price * dep_rate[i];

            if(i > 0)
                owed = owed - downpayment;

            if(car_price > owed)
            {
                if(i == 1)
                    cout << i << " month\n";
                else
                    cout << i << " months\n";

                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }

        if(flag == 0)
        {
            cout << "Impossible\n";
        }

    }
    return 0;
}
