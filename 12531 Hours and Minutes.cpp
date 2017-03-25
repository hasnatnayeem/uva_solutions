#include <iostream>
using namespace std;

int main()
{
    int angle;
    while (cin >> angle)
    {
        if (angle % 6 == 0)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
