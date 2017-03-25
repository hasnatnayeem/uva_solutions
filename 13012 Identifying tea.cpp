#include <iostream>

using namespace std;

int main(){
    int arr[5], temp, i, counter;

    while (cin >> temp)
    {
        counter = 0;
        for (i = 0; i < 5; i++)
        {
            cin >> arr[i];
            if (arr[i] == temp)
                counter++;
        }
        cout << counter << endl;
    }
    return 0;
}

