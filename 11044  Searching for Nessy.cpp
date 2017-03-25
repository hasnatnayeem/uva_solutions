#include <iostream>
using namespace std;
int main()
{
    int t, i, rcounter, ccounter, row, column;
    cin >> t;
    while(t--)
    {
        cin >> row >> column;
        rcounter = ccounter = 1;
        for(i = 1; i + 3 < row; i+=3)
        {
            rcounter++;
        }

        for(i = 1; i + 3 < column; i+=3)
        {
            ccounter++;
        }

        cout << rcounter * ccounter << "\n";
    }
    return 0;
}
