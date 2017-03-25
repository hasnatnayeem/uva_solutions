#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t = 1;
    string str;
    while(cin >> str)
    {
        if (str.compare("#") == 0)
        {
            return 0;
        }

        else if (str.compare("HELLO") == 0)
        {
            cout << "Case " << t << ": " << "ENGLISH" << endl;
        }
        else if (str.compare("HOLA") == 0)
        {
            cout << "Case " << t << ": " << "SPANISH" << endl;
        }
        else if (str.compare("HALLO") == 0)
        {
            cout << "Case " << t << ": " << "GERMAN" << endl;
        }
        else if (str.compare("BONJOUR") == 0)
        {
            cout << "Case " << t << ": " << "FRENCH" << endl;
        }
        else if (str.compare("CIAO") == 0)
        {
            cout << "Case " << t << ": " << "ITALIAN" << endl;
        }
        else if (str.compare("ZDRAVSTVUJTE") == 0)
        {
            cout << "Case " << t << ": " << "RUSSIAN" << endl;
        }
        else
        {
            cout << "Case " << t << ": " << "UNKNOWN" << endl;
        }

        t++;
    }
}
