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

int levels[110];

int main()
{
	// A. I Wanna Be the Guy

	int n;
	cin >> n;
	int p;
	cin >> p;
	for (int j = 0; j < p; j++)
	{
		int tempx;
		cin >> tempx;
		levels[tempx] = 1;
	}
	int q;
	cin >> q;
	for (int k = 0; k < q; k++)
	{
		int tempy;
		cin >> tempy;
		levels[tempy] = 1;
	}
	for (int r = 1; r <= n; r++)
	{
		if (levels[r] == 0)
		{
			cout << "Oh, my keyboard!";
			return 0;
		}
	}

	cout << "I become the guy.";

	return 0;
}
