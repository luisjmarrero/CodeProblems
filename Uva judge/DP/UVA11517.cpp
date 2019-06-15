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

const LL inf = 1e9;
const LL mod = 1000000007;

int bills[1500];
LL memoPay[15000][15000];
LL memoActual[15000];
int n;

LL minPossibleToPay(int given, int actual)
{
	if(given <= actual)return actual;
	if (memoPay[given][actual] != -1) return memoPay[given][actual];
	LL mi = inf;
	for(int i = 0; i < n; ++i){
		mi = min( minPossibleToPay(given,actual + bills[i]) , mi );
	}
	return memoPay[given][actual] = mi;
}



LL coinChange(int actual)
{
	if (actual < 0) return inf;
	if (actual == 0) return 0;
	if (memoActual[actual] != -1) return memoActual[actual];
	LL mi = inf;
	for (int i = 0; i < n; ++i){
		mi = min((1+coinChange(actual-bills[i])), mi );
	}
	return memoActual[actual] = mi;
}

int main()
{
	// UVA - 11517
	ios_base::sync_with_stdio(false);


	int t;
	cin >> t;
	while (t--){
		memset(memoActual, -1, sizeof(memoActual));
		memset(memoPay, -1, sizeof(memoPay));
		LL given;
		cin >> given >> n;
		for (int i = 0; i < n; i++)
			cin >> bills[i];
	
		int pay = minPossibleToPay(given, 0);
		cout << pay << " " << coinChange(pay) << endl;
		//cout << clock();
	}

	return 0;
}
