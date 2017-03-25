#include <iostream>
#include <cstdio>
#include <vector>
#include <string.h>
#include <algorithm>

struct sort_pred
{
    bool operator() (const std::pair<int, int> & left, const std::pair<int, int> &right)
    {
        if (left.second == right.second)
            return left.first > right.first;

        return left.second < right.second;
    }
};

using namespace std;

int main() {
    string s;
    int i;
    int ara[3000];

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int counter = 0;

    while (getline(cin, s))
    {
        counter++;
         if (counter > 1)
            cout << endl;
        vector< pair<int, int> > v;
        memset(ara, 0, sizeof(ara));

        for (i = 0; s[i] != '\0'; i++)
        {
            ara[(int) s[i]]++;
        }

        for (i = 0; i < 3000; i++)
        {
            if (ara[i] > 0)
            {
                v.push_back(make_pair(i, ara[i]));
            }
        }

        sort(v.begin(), v.end(), sort_pred());

        for (size_t i = 0; i < v.size(); i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }

    }
  return 0;
}
