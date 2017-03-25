#include <iostream>
using namespace std;

int a, b, c, temp;

char find(int x)
{
    if(a == x)
        return 'A';
    if(b == x)
        return 'B';
    if(c == x)
        return 'C';
}

int main()
{
    while(cin >> a >> b >> c)
    {
        temp = a + b + c;
        if(temp == 2)
        {
            cout << find(0) << "\n";
        }
        else if(temp == 1)
        {
            cout << find(1) << "\n";
        }

        else
        {
            cout << "*\n";
        }
    }
    return 0;

}
