#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef vector <long long> vll;
const ll tenSix = 1000000;
const ll tenNine = 1000000000;

ll primes[tenSix];

void genPrimes(){
	primes[0] = 1;
	primes[1] = 1;
	for (ll i = 2; i <= sqrt(1000000000); i++){
		if (!primes[i])
			for (ll j = i*i; j <= sqrt(1000000000); j+=i)
				primes[j] = 1;
	}
}

int main()
{
	// prime generator - spoj - RUNTIME
	genPrimes();
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++)
	{
		ll m, n;
		scanf("%lld %lld", &m, &n);
		for (int i = m; i <= n; i++)
		{
			if (primes[i] == 0) printf("%d \n", i);
		}
		printf("\n");
	}


	return 0;
}
