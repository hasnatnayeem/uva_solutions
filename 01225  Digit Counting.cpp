#include <iostream>
#include <sstream>

using namespace std;

string getString(int N)
{
    stringstream ss;
    for(int i = 1; i <= N; i++)
    {
        ss << i;
    }
    return ss.str();
}

int main()
{
    int N, cases;
    int i = 0, result[10];
    string str;

    cin >> cases;

    while (cases--)
    {
        for(i = 0; i < 10; i++)
            result[i] = 0;

        i = 0;

        cin >> N;
        str = getString(N);


        while(str[i] != '\0')
        {
            result[str[i] - '0']++;
            i++;
        }

        i = 0;
        while(i < 10)
        {
            cout << result[i];
            if(i < 9)
                cout << " ";
            i++;
        }
        cout << endl;
    }

    return 0;
}
