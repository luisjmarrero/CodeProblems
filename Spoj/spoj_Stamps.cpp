#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <long> borrow;

int main()
{
	// spoj - 3375. Stamps

	long T;
	cin >> T;
	for (long t = 1; t <= T; t++)
	{
		long stamps, fr;
		vector <long> b;
		borrow = b;
		// imput
		cin >> stamps >> fr;
		for (long s = 0; s < fr ; s++)
		{
			long x;
			cin >> x;
			borrow.push_back(x);
		}
		// sorting vector
		sort(borrow.begin(), borrow.end());
		reverse(borrow.begin(), borrow.end());
		// calculando
		long c = 0, s = 0;
		for (c = 0; c < fr && s < stamps; c++)
		{
			s += borrow[c];
		}
		// output
		cout << "Scenario #" << t << ":" << endl ;
		if (c == fr && s < stamps)
			cout << "impossible" << endl;
		else
			cout << c << endl;
	}
}