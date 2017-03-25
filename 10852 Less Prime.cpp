#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int isPrime(int num)
{
    int root, i;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    root = sqrt(num);
    for (i = 3; i <= root; i += 2)
    {
        if (num % i == 0) return 0;
    }

    return 1;
}

int main(){

	vector<int> v;
	int i, len, t, n;

	v.push_back(2);
	for (i = 3; i <= 5003 ; i += 2)
	{
        if (isPrime(i))
        {
            v.push_back(i);
        }
	}

    cin >> t;
    while (t--){
        cin >> n;
        n = n / 2;

        for (i = 0; i < 699; i++)
        {
            if (v[i] > n)
            {
                cout << v[i] << endl;
                break;
            }
        }
    }
	return 0;
}
