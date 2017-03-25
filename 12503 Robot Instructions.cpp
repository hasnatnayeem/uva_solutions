#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    string s;
    int instruction, cases, p, pos, num, counter;

//    freopen("in.txt", "r", stdin);
//   freopen("out.txt", "w", stdout);

    cin >> cases;

    while (cases--)
    {
        cin >> instruction;
        vector< int > v;
        pos = counter = 0;

        while (instruction--)
        {
            cin >> s;

            if (s[0] == 'L')
                v.push_back(-1);
            else if (s[0] == 'R')
                v.push_back(1);
            else
            {
                cin >> s >> num;
                v.push_back(v[num - 1]);
            }
            pos += v[counter];
            counter++;
        }
        cout << pos << endl;
    }
  return 0;
}
