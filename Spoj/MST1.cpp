#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

#define INF 2000000000

using namespace std;

typedef long long LL;
typedef vector <int> VI;
typedef vector <long long> VLL;
typedef vector <VI> VVI;

int memo[100000010];
bool cached[10000010];

int min(int a, int b, int c){
	int m = a;
	if (m > b) m = b;
	if (m > c) m = c;
	return m;
}

int min_step(int n){
	if (n == 1) return 0;
	if (n == 2) return 1;

	if (cached[n]) return memo[n];
	int p1 = min_step(n-1) + 1;
	int p2, p3;
	(n%2 == 0)? p2 = min_step(n/2) + 1 : p2 = INF;
	(n%3 == 0)? p3 = min_step(n/3) + 1 : p3 = INF;
	memo[n] =  min(p1, p2, p3);
	cached[n] = true;
	return memo[n];
}

int main()
{
	// spoj - MST1  - RUNTIME

	int T;
	scanf("%d", &T);
	while (T--)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", min_step(n));
	}
	return 0;
}
