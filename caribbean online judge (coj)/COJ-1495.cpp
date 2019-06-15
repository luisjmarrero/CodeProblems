#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector <int> vect;

int main()
{
	// COJ-1495
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		vect.push_back(x);
	}
	sort(vect.begin(), vect.end());
	for (int j = 0; j < n; ++j)
	{
		cout << vect[j] << "\n";
	}

	return 0;
}

