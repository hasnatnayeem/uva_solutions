#include <iostream>
using namespace std;

int main()
{
    int b, s, cases = 0;
    char res;

    while (cin >> b >> s && b && s)
    {
        cases++;
        res = b > s ? '(' : '|';
        if (b == 1)
            res = '\\';
        cout << "Case " << cases << ": :-" << res << endl;
    }
    return 0;
}
