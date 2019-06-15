#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

char board[110][110];

int main()
{
	// A - Appleman and Easy Task

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> board[i][j];

	int adjacents = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=0)
			{
				if(board[i-1][j] == 'o')adjacents++;
			}
			if(i!=n-1)
			{
				if(board[i+1][j] == 'o')adjacents++;
			}
			if(j!=0)
			{
				if(board[i][j-1] == 'o')adjacents++;
			}
			if(j!=n-1)
			{
				if(board[i][j+1] == 'o')adjacents++;
			}
			if (adjacents % 2)
			{
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	cout << "YES" << endl;

	return 0;
}
