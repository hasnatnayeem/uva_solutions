#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

struct mysort
{
    bool operator() (const pair <int, int> &left, const pair <int, int> &right)
    {
        if (left.second == right.second)
            return left.first > right.first;
        return left.second < right.second;
    }
};

int validate(char c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 'a' + 'A';
    return c;
}


int main()
{
    vector<pair<int, int> > v;
    int cases;
    string line;
    char c;

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    cin >> cases;
    scanf("%c", &c);

    for (int i = 'A'; i <= 'Z'; i++)
    {
        v.push_back(make_pair(i - 'A', 0));
    }


    while (cases--)
    {
        getline(cin, line);
        for (int i = 0; line[i] != '\0'; i++)
        {
            line[i] = validate(line[i]);
            if (line[i] >= 'A' && line[i] <= 'Z')
            {
                v[line[i] - 'A'].second++;
            }
        }
    }
    sort(v.begin(), v.end(), mysort());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i].second > 0)
            cout << (char) (v[i].first + 'A') << " " << v[i].second << endl;
    }
    return 0;
}
