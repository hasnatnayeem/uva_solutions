#include <iostream>

using namespace std;

int main(){

/*
  // Determine the day of a date
*/
    int d, m, y, a;

    d = 29; m = 05; y = 2013;
    a = (14 - m) / 12;
    y = y - a;
    m = m + 12 * a - 2;
    d = (d + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

    cout << "May 29, 2013 Wednesday" << endl;

    return 0;
}
