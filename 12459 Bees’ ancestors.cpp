#include <iostream><
#include <map>
using namespace std;

map<int, long> m;

void initialize()
{
    m[1] = 1;
    m[2] = 2;
    for (int i = 3; i <= 80; i++)
        m[i] = m[i - 1] + m[i - 2];
}

int main()
{
    int generation;
    initialize();

    while (cin >> generation && generation)
        cout << m[generation] << endl;
    return 0;
}
