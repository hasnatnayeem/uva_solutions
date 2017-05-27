#include <iostream>
using namespace std;

int main()
{
    long long n, temp;

    while (cin >> n)
    {
        temp = (n * (n + 1)) / 2;
        cout << temp * temp << endl;
    }
    return 0;
}
