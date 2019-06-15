#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	// A - Vasya and Socks
	int n, m;
	cin >> n >> m;
	int answer = n + n/(m-1);
	if (!(n%(m-1))) answer--;
	cout << answer << endl;
}
