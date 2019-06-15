#include <iostream>
#include <cstdio>
#include <string>
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

LL memo[1000010];
bool cached[1000010];

LL sequence(LL i){
	if (i == 0) return 1;
	if (i == 1) return 3;
	if (cached[i]) return memo[i];
	memo[i] =
			(
			sequence( (i - sqrt(i))) %1000000 +
			sequence((log(i))) %1000000 +
			sequence((i * ( sin(i)*sin(i) ))) % 1000000
			) % 1000000;
	cached[i] = true;

	return memo[i];
}

int main()
{
	// UVA 11703 
	LL x;
	cin >> x;
	while (x != -1 )
	{
		cout << sequence(x) << endl;
		cin >> x;
	}

	return 0;
}
