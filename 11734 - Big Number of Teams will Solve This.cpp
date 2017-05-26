#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str, judge;
    int cases;
    char c;

    cin >> cases;
    cin.ignore();
    for (int i = 1; i <= cases; i++)
    {
        getline(cin, str);
        getline(cin, judge);
        cout << "Case " << i << ": ";

        if (str == judge)
        {
            cout << "Yes" << endl;
            continue;
        }

        str.erase(std::remove(str.begin(), str.end(), ' '), str.end());

        if (str == judge)
            cout << "Output Format Error" << endl;
        else
            cout << "Wrong Answer" << endl;
    }
    return 0;
}

