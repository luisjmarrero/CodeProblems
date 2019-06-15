#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	// A. inc ARG
	int n;
	string bits;
	cin >> n >> bits;
	string nbits;
	int answer = 0, remain = 0;
	for (int i = 0; i < n ; ++i)
	{
		answer++;
		if (bits[i] != '1')
		{
			remain = i;
			break;
		}
	}
	for (int i = remain; i < n; ++i)
		if (bits[i] == 1) answer++;

	cout << answer<< endl;
}
