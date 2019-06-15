#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	// uva_100
	int i, j;
	while (cin >> i >> j)
	{
//	while (scanf("%d %d", &i , &j) != EOF)
//	{
		int ni = i, nj = j;
		if (ni > nj) swap(ni,nj);
		int max = 0;
		while (ni <= nj)
		{
			int n = ni;
			int cycle = 1;
			while (n != 1)
			{
				if (n % 2 == 1) n =  3 * n  + 1;
				else n /= 2;
				cycle++;
			}

			if ( cycle > max ) max = cycle;

			ni++;
		}

//		printf("%d %d %d \n", i, j, max);
		cout << i << " " << j << " " << max << endl;
	}
}

/*
1. input n
2. print n
3. if n = 1 then STOP
4. if n is odd then
5. else
6. GOTO 2
 */
