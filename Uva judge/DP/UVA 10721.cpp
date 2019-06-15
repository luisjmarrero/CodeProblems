
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;

typedef long long LL;
typedef vector <int> VI;
typedef vector <long long> VLL;
typedef vector <VI> VVI;
typedef map <long long, long long> MLL;
typedef map <int ,int> MII;

const LL mod = 1000000007;

LL memo[60][60][60];

LL DP (int n, int k, int m)
{
	if (k == 0) return n==0 ? 1 : 0;
	if (memo[n][k][m] != -1) return memo[n][k][m];
	LL dp = 0;
	for (LL i = 1; i <= m && i <= n; i++)
		dp += DP(n-i, k-1, m);

	memo[n][k][m] = dp;
	return memo[n][k][m];
}

int main()
{
	// UVA 10721
	ios_base::sync_with_stdio(false);
	memset(memo, -1, sizeof(memo));
	int n, k, m;
	while(cin >> n >> k >> m){
		cout << DP(n,k,m) << endl;
	}
	return 0;
}
