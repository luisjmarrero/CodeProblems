// spoj_106_Binary_Stirling_Numbers
// luisjamrrero

#include <iostream>

using namespace std;

//long long S(long long n, long long m)
//{
//	if (n == 0 && m == 0)
//        return 1;
//	else if (n == 0 || m == 0)
//    	return 0;
//    
//    return (m * S(n-1, m) + S(n-1, m-1));
//}

int main()
{
	int D;
	cin >> D;
	for (int d = 0; d < D; d++)
	{
		long long m, n;
		cin >> n >> m;
		// cout << S(n,m)%2 << endl;
        cout << !((n-m)&((m-1)>>1)) << endl;  // lo acepto con error en 1,0 ó en 0,1 no recuerdo XD
	}
}

/*
 S(0, 0) = 1,
 S(n, 0) = 0, for n > 0,
 S(0, m) = 0, for m > 0,
 S(n, m) = m*S(n-1, m) + S(n-1, m-1), for n, m > 0.
 */