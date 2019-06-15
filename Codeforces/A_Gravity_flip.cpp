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

vi colums;

int main()
{
	// A_Gravity_flip
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		colums.push_back(x);
	}
	sort(colums.begin(), colums.end());
	for (int j = 0; j < n; j++)
	{
		cout << colums[j] << " ";
	}

	return 0;
}
