#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int abs(int x)
{
	return (x > 0)? x : -x;
}

int main()
{
	// Codeforces - Pashmak and Garden
	long x, y, xx, yy;
	cin >> x >> y >> xx >> yy;
	// abs(x-xx) distancia de x a xx
	if (x != xx && y != yy && abs(x-xx) != abs(y-yy)) cout << -1 << endl;
	else if (x == xx)
		cout << x + abs(y-yy) << " " << y << " " << xx + abs(y-yy) << " " << yy<< endl;
	else if (y == yy)
		cout << x << " " << y + abs(x-xx) << " " << xx << " " << yy + abs(x-xx) << endl;
	else
		cout << x << " " << yy << " " << xx << " " << y << endl;

	return 0;
}

/*
0 0 0 1
0 0 1 1
0 0 1 2
 */
