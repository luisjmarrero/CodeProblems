#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

long long LIM = 1000000000;

long long digitSum(long long x)
{
	if (x < 0) return -1;
	long long sum = 0;
	while (x)
	{
		sum += x%10;
		x /= 10;
	}

	return sum;
}

long long power(long long x, long n)
{
    if (n == 0) return 1;
    if (n % 2 == 0) return pow(power(x, n / 2), 2);
    else return x * power(x, n - 1);
}
/*
long long power(long long x, long e)
{
	long p = 1;
	for (long long i = 0; i < e; ++i)
		p *= x;

	return p;
}
*/
int main()
{
	// B. Little Dima and Equation
	long long a, b, c;
	cin >> a >> b >> c;
	vector <long long> solutions;
	int n = 0;
	for (long long i = 1; i < 100; ++i)
	{
		long long x = b*power(i, a)+c;
		if (digitSum(x) == i && x < LIM)
		{
			solutions.push_back(x);
			n++;
		}
	}

	cout << n << endl;
	for (long long i = 0; i < n; ++i)
		cout << solutions[i] << " ";

	cout << "\n";
}
