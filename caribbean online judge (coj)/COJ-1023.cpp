#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector <int> vect;

int main()
{
	// COJ-1023
	double answer = 0;
	for (int i = 0; i < 12; ++i)
	{
		double x;
		scanf("%lf", &x);
		answer += x;
	}

	printf("$%.2lf", answer/12);

	return 0;
}
