#include <iostream>
using namespace std;

int main()
{
    string str;
    int t = 1;
    while (cin >> str)
    {
        if (str[0] == '*')
        {
            return 0;
        }

        else if (str[0] == 'H')
        {
            cout << "Case " << t << ": Hajj-e-Akbar\n";
        }
        else
        {
            cout << "Case " << t << ": Hajj-e-Asghar\n";
        }

        t++;
    }
    return 0;
}
