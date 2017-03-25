#include <iostream>


using namespace std;

int main()
{
    string s;
    int i, counter = 1;
    while(getline(cin, s))
    {
        for(i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == '"')
            {
                if(counter % 2 != 0)
                {
                    cout << "``";
                }
                else
                {
                    cout << "''";
                }

                counter++;
            }
            else
            {
                cout << s[i];
            }

        }
        cout << "\n";
    }
    return 0;
}
