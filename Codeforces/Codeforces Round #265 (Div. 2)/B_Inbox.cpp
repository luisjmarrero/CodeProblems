#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector <int> arr;

int main()
{
	// B. Inbox (100500)
	int n;
	cin >> n;
	int unread = 0;
	for (int i = 0; i < n; ++i)
	{
		int m;
		cin >> m;
		if (m == 1)
		{
			arr.push_back(i);
			unread++;
		}
	}
	// if all are unread
	if (unread == n)
	{
		cout << n << endl;
		return 0;
	}
	// if all are read
	if (unread == 0)
	{
		cout << 0 << endl;
		return 0;
	}

	int answer = 1;
	for (int i = 1; i < unread; ++i)
	{
		int ope = arr[i] - arr[i-1] ;
		if (ope < 3) answer += ope; // si  ope <= 2 no vale la pena volver a la lista
		else answer += 2; // de lo contrario si
	}

	cout << answer << endl;

	return 0;
}
