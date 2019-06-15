#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <utility>
#define INF 2000000000
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef vector <long long> vll;
typedef pair<int, int> pii;

int main()
{
	// Subarray GCD
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		vi array;
		int n;
		cin >> n;
		int answer = n, g = 0;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			//array.push_back(temp);
			if (i == 0)
			{
				g = temp;
			}
			else
			{
				g = __gcd(g, temp);
			}
		}

		if (g == 1) cout << answer << "\n";
		else cout << -1 << "\n";

	}

	return 0;
}
