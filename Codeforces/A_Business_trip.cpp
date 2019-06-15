#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
vector <int> vc;

int main()
{
	// A - Business trip
	int k;
	cin >> k;
	for (int i = 0; i < 12; i++)
	{
		int temp;
		cin >> temp;
		vc.push_back(temp);
	}
	if (k == 0)
	{
		cout << 0;
		return 0;
	}
	sort(vc.begin(), vc.end());
	reverse(vc.begin(), vc.end());
	int cant = 0, answer = 0;
	for (int j = 0; j < 12; j++)
	{
		cant += vc[j];
		answer++;
		if (cant >= k)
		{
			cout << answer;
			return 0;
		}
	}

	cout << -1;

	return 0;
}

