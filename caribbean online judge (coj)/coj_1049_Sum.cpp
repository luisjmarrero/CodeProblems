#include <iostream>

using namespace std;

int main()
{
	// coj - 1049 - Sum
	// WRONG ANSWER

	long n, c = 0;
	cin >> n;
	for (long i = 0; i <= n; i++)
	{
		c += i;
	}

	cout << c << endl;

}