#include <iostream>
using namespace std;

int main()
{
    int n, wall[50], result, i, counter, t = 0;
    while(cin >> n)
    {
        if (n == 0) break;
        t++;

        for(i = 0, result = 0; i < n; i++)
        {
            cin >> wall[i];
            result += wall[i];
        }

        result /= n;

        for(i = 0, counter = 0; i < n; i++)
        {
            if (wall[i] > result) counter += wall[i] - result;
        }

        cout << "Set #" << t << "\n" << "The minimum number of moves is " << counter <<".\n\n";
    }
    return 0;
}
