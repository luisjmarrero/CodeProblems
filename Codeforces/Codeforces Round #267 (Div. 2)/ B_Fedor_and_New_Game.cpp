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

vi players;

int main()
{
	// B. Fedor and New Game
	vi armys;
	int n, m , k;
	cin >> n >> m >> k;
	for (int i = 0; i <= m; i++)
	{
		int x;
		cin >> x;
		armys.push_back(x);
	}
	int answer = 0;
	for (int j = 0; j < m; j++)
	{
		int a = armys[m],  b = armys[j];
		int dif = 0, comp = a ^ b;
			while (comp)
			{
				dif++;
				comp &= comp - 1;
			}

		if (dif <= k) answer++;

	}
	cout << answer;

	return 0;
}
