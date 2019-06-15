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

const LL mod = 1000000007;

LL solve(LL n){
	LL answer = 0;
	for (LL i = 1 ; (3 * i * (i + 1) / 2 - i) <= n ; i++)
	    if ((n + i) % 3 == 0) answer++;

	return answer;
}

int main()
{
	// C_MUH_and_House_of_Cards
	ios_base::sync_with_stdio(false);
	LL n;
	cin >> n;
	cout << solve(n) << endl;

	return 0;
}
