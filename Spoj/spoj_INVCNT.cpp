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

LL numbers[10000005];

int main()
{
	// spoj_INVCNT 
	ios_base::sync_with_stdio(false);
	LL t;
	scanf("%lld", &t);
	while(t--){
		LL n;
		scanf("%lld", &n);
		for (LL N = 0; N < n; N++)
			cin >> numbers[N];

		LL answer = 0;
		for (LL i = 0; i < n-1; i++)
			for (LL j = i; j < n; j++)
				if (numbers[i] > numbers[j]) answer++;

		printf("%lld\n", answer);
	}

	return 0;
}
