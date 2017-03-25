#include <iostream>
#include <sstream>
using namespace std;

int counter, maximum, numbers[1000];

void parseIntFromStringLine(string str)
{
    counter = 0;
    string word;
    stringstream stream(str);

    while(getline(stream, word, ' '))
    {
        istringstream(word) >> numbers[counter];
        counter++;
    }
}

int main()
{
    int t;
    string str;
    getline(cin, str);
    parseIntFromStringLine(str);
    t = numbers[0];

    for(int  p = 1; p <= t; p++)
    {
        getline(cin, str);
        parseIntFromStringLine(str);
        maximum = 0;

        for(int i = 0; i < counter; i++)
        {
            if(numbers[i] > maximum)
                maximum = numbers[i];
        }

        cout << "Case " << p << ": " << maximum << "\n";
    }
    return 0;
}

