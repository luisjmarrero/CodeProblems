// uri
// 1015
// luisjmarrero

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>

using namespace std;

const double PI = 3.14159;

int main()
{
	int x1, y1;
	cin >> x1 >> y1;
	int x2, y2;
	cin >> x2 >> y2;
	int x = x2-x1;
	int y = y2-y1;
	x *= x, y *= y;
	double answer = sqrt(x+y);
	printf("%.4lf\n", answer);
}

/*
Distance = sqrt((x2-x1)^2 + (y2-y1)^2))
*/
