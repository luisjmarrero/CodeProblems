#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	// codeforces - B. Fedya and Maths

	unsigned long long n, x;

	cin >> n;

	x = (pow(1,n)+pow(2,n)+pow(3,n)+pow(4,n));
	x %= 5;

	cout << x << endl;
	
}