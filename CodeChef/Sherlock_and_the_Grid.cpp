#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef vector <long long> vll;

char grid[1010][1010];
int row[1010][1010];
int columns[1010][1010];

int main()
{
	// Sherlock and the Grid
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		for (int r = 0; r < n; r++)
			scanf("%s", grid[r]);
		// rows
		for (int r = 0; r < n; r++)
		{
			int rocks = 0;
			for (int c = n-1; c >= 0; c--)
			{
				if (grid[r][c] == '#')
					row[r][c] = ++rocks;
				else row[r][c] = rocks;
			}
		}
		// columns
		for (int c = 0; c < n; c++)
		{
			int rocks = 0;
			for (int r = n-1; r >= 0; r--)
			{
				if (grid[r][c] == '#')
					columns[r][c] = ++rocks;
				else columns[r][c] = rocks;
			}
		}

		// getting answer
		int answer = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (row[i][j] == 0 && columns[i][j]  == 0) answer++;

//		// TESTING
//		// watching rows
//		for (int r = 0; r < n; r++)
//		{
//			for (int c = 0; c < n; c++)
//				cout << row[r][c] << " ";
//
//			cout << "\n";
//		}
//		// watching columns
//		for (int r = 0; r < n; r++)
//		{
//			for (int c = 0; c < n; c++)
//				cout << columns[r][c] << " ";
//
//			cout << "\n";
//		}

		cout << answer << "\n";

	}

	return 0;
}
