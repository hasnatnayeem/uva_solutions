#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
    int d, m, y;
    string s;
    Student(const string& str, int day, int month, int year) : s(str), d(day), m(month), y(year) {}
};

struct sort_pred
{
    bool operator() (const Student& std1, const Student& std2)
    {
        if (std1.y == std2.y)
        {
            if (std1.m == std2.m)
            {
                return std1.d < std2.d;
            }
            return std1.m < std2.m;
        }
        return std1.y < std2.y;
    }
};

int main() {
    string s;
    int d, m, y, TC;

//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    int counter = 0;

    while (cin >> TC)
    {
        vector< Student > v;
        while (TC--)
        {
            cin >> s >> d >> m >> y;
            v.push_back(Student(s, d, m, y));
        }
        sort(v.begin(), v.end(), sort_pred());

        cout << v[v.size() - 1].s << endl << v[0].s << endl;
    }
  return 0;
}
