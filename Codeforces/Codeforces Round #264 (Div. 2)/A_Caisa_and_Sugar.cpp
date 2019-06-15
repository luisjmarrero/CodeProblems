#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	// A - Caisa and Sugar

	int n, s;
	cin >> n >> s;
	int max = 0, candy = -1;
	for(int i = 0; i < n; ++i)
	{
		int dolar, cent;
		cin >> dolar >> cent;
		if((cent == 0 && s >= dolar) || (cent > 0 && s-1 >= dolar) )
		{
			candy = (100 - cent) % 100;
			if(candy > max ) max = candy;
		}
	}
	if(candy == -1) cout << -1 << endl;
	else cout << max << endl;
	return 0;
}
