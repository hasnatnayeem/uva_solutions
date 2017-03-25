
#include <iostream>
#include <cstdio>
#include <math.h>
#include <iomanip>
using namespace std;


int main()
{
   // freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int cases;
    double length, width, depth, weight, counter;
    cin >> cases;

    counter = 0;
    while (cases--)
    {
        cin >> length >> width >> depth >> weight;
        if (((length <= 56 && width <= 45 && depth <= 25) || (length + width + depth) <= 125) && weight <= 7)
        {
            counter++;
            cout << "1" << endl;
        }
        else
            cout << "0" << endl;
    }
    cout << counter << endl;
    return 0;
}

