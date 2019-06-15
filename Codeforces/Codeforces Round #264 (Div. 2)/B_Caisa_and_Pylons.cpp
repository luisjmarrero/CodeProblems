#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// vector <int> vect;

int main()
{
	// B - Caisa and Pylons
	int n;
	cin >> n;
	int answer = 0, x = 0, energy = 0;
	for (int i = 0; i <= n; ++i)
	{
		int y;
		cin >> y;
		energy += x-y;
		if (energy < 0) // si es negativa consume dolares
		{
			answer += -energy;
			energy = 0;
		}

		x = y;
	}

	cout << answer << endl;

	return 0;
}
