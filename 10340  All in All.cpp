#include <iostream>
#include <cstdio>
using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    string s1, s2;
    int n, ind;

    while (cin >> s1 >> s2)
    {
        n = s1.size();
        ind = 0;
        for (int i = 0; s2[i] != '\0' && ind < n; i++)
            if (s2[i] == s1[ind])
                ind++;

        if (n == ind)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
  return 0;
}
