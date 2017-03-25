#include <iostream>
using namespace std;

int main()
{
    int t, e, f, c, temp, counter;
    cin >> t;
    while(t--)
    {
        cin >> e >> f >> c;
        temp = e + f;
        counter = 0;

        if(temp < c)
        {
            cout << counter << "\n";
            continue;
        }
        else
        {
            while(1)
            {
                counter++;
                temp = temp - c + 1;
                if(temp < c)
                {
                    cout << counter << "\n";
                    break;
                }
            }
        }

    }
    return 0;
}
