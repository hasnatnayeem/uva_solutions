#include <iostream>
using namespace std;


int valid(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
        return 1;
    return 0;
}

int main()
{
    string s;
    int i, counter, started;
    while(getline(cin, s))
    {
        for(i = counter = 0; s[i] != '\0'; i++)
        {
            if(valid(s[i]))
            {
                started = 1;
            }
            else if(started && !valid(s[i]))
            {
                counter++;
                started = 0;
            }
        }

        if(valid(s[i-1]))
            counter++;

        cout << counter << endl;
    }
    return 0;
}
