#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

long long H(long long n){
    if (n < 1) return 0;

    long long last_res = n, sum = 0, res, temp, l;
    l = floor(sqrt(n));

    for( int i = 1; i <= l; i++)
    {
        res = n / i;
        temp = ((last_res - res) * (i - 1)) + res;
        sum += temp;
        last_res = res;
    }

    if(res > l)
        sum += l;

    return sum;
}

int main(){
//   freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
	int cases, n;
	cin >> cases;
	while (cases--)
	{
        cin >> n;
        cout << H(n) << endl;
	}

	return 0;
}
