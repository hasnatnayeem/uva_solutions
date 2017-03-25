#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int found(int num, int v[], int l)
{
    int high, low, mid;
    low = 0;
    high = l - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (num == v[mid])
            return 1;
        else if (num > v[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

int main()
{
    int course[103], i, counter, minimum, offered, courses, category, temp;
    bool flag;

   // freopen("in.txt", "r", stdin);

    while (cin >> courses)
    {
        if (!courses) break;
        cin >> category;

        for (i = 0; i < courses; i++)
            cin >> course[i];

        sort(course, course + courses);

        flag = 1;
        while (category--)
        {
            counter = 0;
            cin >> offered >> minimum;
            while (offered--)
            {
                cin >> temp;
                if (counter < minimum)
                    if (found(temp, course, courses))
                        counter++;
            }
            if (counter < minimum)
                flag = 0;
        }
        if (flag) cout << "yes\n";
        else cout << "no\n";
    }
}
