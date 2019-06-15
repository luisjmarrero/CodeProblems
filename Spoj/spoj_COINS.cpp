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

const LL mod = 1000000007;

map <LL, LL> memomap;

LL dolarMax(LL n){
	if(n==0) return 0;
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (memomap.count(n) > 0) return memomap[n];
	LL answer = dolarMax(n/2) + dolarMax(n/3) + dolarMax(n/4);
	memomap[n] = max(answer, n);
	return memomap[n];
}


int main()
{
	// spoj_COINS
	ios_base::sync_with_stdio(false);
	memomap.clear();
	LL n;
	while(cin >> n){
		cout << dolarMax(n) << endl;
	}
	return 0;
}

