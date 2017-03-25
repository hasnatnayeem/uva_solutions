#include <iostream>

using namespace std;

int main()
{
    int a, b, temp, bricks;

    while(cin >> bricks && bricks)
    {
        a = 0;
        b = 1;
        for(int p = 0; p < bricks; p++)
        {
            temp = a + b;
            a = b;
            b = temp;
        }
        cout << b << endl;
    }

    return 0;
}
