// spoj_7718_Number_of_common_divisors
// luisjmarrero

#include <iostream>
#include <cmath>
#include <cstdio>
// #include <math.h>

using namespace std;

int MCD(int a, int b) {
    return b == 0 ? a : MCD(b, a % b);
}

int comDiv(int a, int b){
	int cd = 0, mcd = MCD(a,b);
	int raiz = (int) sqrt(mcd);
	for (int d = 1; d <=  raiz; d++)
	{
		if (mcd % d == 0) 
			cd += 2;
		if (d * d == mcd) cd--;
	}
	
	return cd;
}

int main()
{
	int T,a,b;
	//cin >> T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++)
	{
		//cin >> a >> b;
		scanf("%d %d", &a, &b);
		//cout << comDiv(a,b) << "\n";
		printf("%d\n", comDiv(a,b));
	}
}