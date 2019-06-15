#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector <int> vect;

int power(int x, int e)
{
	int p = 1;
	for (int i = 0; i < e; ++i)
		p *= x;

	return p;
}

int main()
{
	// COJ-1099
	int a, b, c;
	cin >> a;
	while (a)
	{
		cin >> b >> c;
		int x= power(a, 2), y= power(b,2), z = power(c,2);
		if (x+y == z || x+z == y || y+z == x)
			cout << "right\n";
		else cout << "wrong\n" ;
		cin >> a;
	}

	return 0;
}

/*
right
wrong
 */
