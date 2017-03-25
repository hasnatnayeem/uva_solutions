#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    unsigned long match, player;

//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    while (cin >> player)
    {
        match = 0;

        while (player != 1)
        {
            if (player % 2 == 1)
            {
                player--;
                match++;
            }
            player /= 2;
            match += player;
        }
        cout << match << endl;
    }
    return 0;
}

