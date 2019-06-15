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

LL mod = 1000000;
LL memo[10010][10010];
bool cached[10010][10010];

LL n_ways(int n, int k){
	if (n == 1) return k;
	if (k == 1) return 1;
	if (cached[n][k]) return memo[n][k];
	LL w = 0;
	for (int i = 0; i <= n; i++)
		w = (w%mod) + (n_ways(n-i, k-1) % mod);

	memo[n][k] = w;
	cached[n][k] = true;
	return memo[n][k];
}

int main()
{
	// UVA 10943
	int n, k;
	cin >> n >> k;
	while (n != 0 && k != 0){
		cout << n_ways(n, k) << endl;
		cin >> n >> k;
	}


	return 0;
}
