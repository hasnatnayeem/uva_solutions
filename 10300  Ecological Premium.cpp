#include <iostream>
using namespace std;

int main()
{
    int CASES, farmyard, animal, indicator, farmers;
    double premium;

    cin >> CASES;

    while(CASES--)
    {
        cin >> farmers;
        premium = 0;
        while(farmers--)
        {
            cin >> farmyard >> animal >> indicator;
            premium += (farmyard / (animal * 1.0)) * indicator * animal;
            //cout << "Premium = " << premium << endl;
        }
        cout << premium << endl;
    }
    return 0;
}
