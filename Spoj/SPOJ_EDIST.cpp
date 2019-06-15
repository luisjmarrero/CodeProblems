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
typedef vector <int, int> VII;
typedef vector <VI> VVI;
typedef pair <int, int> II;
typedef map <long long, long long> MLL;
typedef map <int ,int> MII;
const LL inf = 1e9;
const LL mod = 1000000007;

#define DEBUG(x) { cout << "!" << #x << " = " << x << endl; }
#define SORT(vec) { sort(vec.begin(), vec.end()); }
#define PB(x) push_back(x);

string a, b;

LL memo[2010][2010];

LL LevenshteinDistance(LL lenA, LL lenB){
	if (lenA == 0) return lenB;
	if (lenB == 0) return lenA;
	
	if (memo[lenA][lenB] != -1) return memo[lenA][lenB];

	LL cost;
	if (a[lenA-1] == b[lenB-1])
		cost = 0;
	else
		cost = 1;

	LL ret =  min(LevenshteinDistance(lenA - 1, lenB) + 1,
			LevenshteinDistance(lenA , lenB - 1) + 1);

	return memo[lenA][lenB] = min( ret, LevenshteinDistance(lenA - 1, lenB - 1) + cost);
}
int main()
{
	// SPOJ_EDIST
	// Joa dijo que esta bien pero spoj da TLE
	ios_base::sync_with_stdio(false);
	LL T;
	scanf("%lld", &T);
	while (T--){
		memset(memo, -1, sizeof(memo));
		scanf("%s", &a);
		scanf("%s", &b);
		LL lenA = a.size(), lenB = b.size();
		printf("%lld\n",LevenshteinDistance(lenA, lenB));// << endl;
	}

	return 0;
}
