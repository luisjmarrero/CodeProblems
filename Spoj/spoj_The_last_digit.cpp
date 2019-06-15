// spoj - 3442. The last digit
// luisjmarrero

#include <iostream>

using namespace std;

int potencia(int a, int b)
{
    if(b == 0) return 1;
    int p = potencia(a,b/2);
    p *= p;
    if(b & 1) p *= a;
    return p%10;
}

int main()
{
	int T;
	cin >> T;
	for (int t = 0; t < T ; t++)
	{
		int a, b, last = 1; // a, b, lastDigit
		cin >> a >> b;
		cout << potencia(a%10, b) << "\n";
	}
}