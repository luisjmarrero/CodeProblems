#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

typedef long long LL;
typedef vector <int> VI;
typedef vector <long long> VLL;
typedef vector <VI> VVI;
const LL tenSix = 1000000;

LL primes[tenSix+10];

void genPrimes(LL n){
	primes[0] = 1;
	primes[1] = 1;
	for (LL i = 2; i <= n + 1; i++){
		if (!primes[i])
			for (LL j = i*i; j <= n + 1; j+=i)
				primes[j] = 1;
	}
}

int main()
{
	// A_Design_Tutorial_Learn_from_Math
	ios_base::sync_with_stdio(false);
	LL n, y;
	cin >> n;
	genPrimes(n);
	for (LL i = 4 ; i < n; i++){
		y = n - i;
		//cout << "-: " << i << " " << y << endl;
		//cout << "-:: " << primes[i] << " " << primes[y] << endl;
		if (primes[i] && primes[y]) {
			cout << i << " " << y << endl;
			return 0;
		}
	}

	return 0;
}
