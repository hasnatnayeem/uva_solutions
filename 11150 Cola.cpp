#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int emptyBottle, bottle, consumed, gift;
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    while (cin >> bottle)
    {
        consumed = bottle;
        emptyBottle = bottle + 1;

        while (emptyBottle > 2)
        {
            gift = emptyBottle / 3;
            consumed += gift;
            emptyBottle = (emptyBottle % 3) + gift;
        }

        cout << consumed << endl;

    }
    return 0;
}



