#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

#define tenPowerFive 100000

using namespace std;

/*
 n (1 ≤ n ≤ 10^5)
 (1 ≤ ai, bi ≤ n)
 All ai are distinct. All bi are distinct.
 */



int main()
{
	// A. Laptops
	int n;
	cin >> n;
	int quality[tenPowerFive+10];
	for(int i=0; i<n; i++)
	{
		int p, q;
		cin >> p >> q;
		quality[p] = q;
	}
	for (int j = 1; j < n; j++)
	{
		if (quality[j] > quality[j+1])
		{
			cout << "Happy Alex";
			return 0;
		}
	}

	cout << "Poor Alex";

	return 0;
}


