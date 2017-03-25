#include <iostream>
using namespace std;

int main()
{
    int p, o, h;

    while (cin >> p >> h >> o)
    {
        if (o - p < h)
            cout << "Hunters win!" << endl;
        else
            cout << "Props win!" << endl;
    }
    return 0;
}
