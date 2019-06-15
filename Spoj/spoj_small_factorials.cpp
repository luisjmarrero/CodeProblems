#include <iostream>
using namespace std;

unsigned long long factorial(int number) {
	unsigned long long temp;

	if(number <= 1) return 1;

	temp = number * factorial(number - 1);
	return temp;
}

int main() {
	// spoj - 24. Small factorials
	long t;
	cin >> t;
	for (long i = 0; i < t; i++)
	{
		long n; // DESPUES DE 65 NO CABEN LOS FACTORIALES (EPLOTAAAAAA!)
		cin >> n;
		cout << factorial(n) << endl;
	}
	
}