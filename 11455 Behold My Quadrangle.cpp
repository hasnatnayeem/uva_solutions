#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;

        if(a == b && b == c && c == d)
        {
            cout << "square" << endl;
        }

        else if((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
        {
            cout << "rectangle" << endl;
        }

        else if((a + b + c > d) && (b + c + d > a) && (a + c + d > b) && (a + b + d > c))
        {
            cout << "quadrangle" << endl;
        }
        else
        {
            cout << "banana" << endl;
        }
    }
    return 0;
}
