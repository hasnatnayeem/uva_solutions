#include <iostream>
#include <sstream>
using namespace std;

string IntToString(int x)
{
    ostringstream temp;
    temp << x;
    return temp.str();
}

int main()
{
    int n, t;
    double result;
    cin >> t;
    while(t--)
    {
        cin >> n;
        n = n * 567;
        n = n / 9;
        n = n + 7492;
        n = n * 235;
        n = n / 47;
        n = n - 498;
        if(n < 0)
            n = n * (-1);

        int x = 2;
        int temp;
        while(x--)
        {
            temp = n - (n / 10) * 10;
            n = n / 10;
        }

        cout << temp << "\n";
    }
    return 0;
}
