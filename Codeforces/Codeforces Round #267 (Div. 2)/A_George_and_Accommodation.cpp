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
typedef pair<int, int> ii;

int main()
{
	// A

	int n;
	cin >> n;
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		int p, q;
		cin >> p >> q;
		if (q - p >= 2) answer++;
	}
	cout << answer;

	return 0;
}
