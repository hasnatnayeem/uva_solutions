#include <iostream>
using namespace std;

int main()
{
    int t = 0, n, i, balance, temp;
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }

        t++;
        balance = 0;

        for(i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp == 0)
                balance--;
            else
                balance++;
        }
        cout << "Case " << t << ": " << balance << "\n";
    }
    return 0;
}
