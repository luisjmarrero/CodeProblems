// spoj_3410_Feynman
// luisjmarrero

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n != 0) {
		cout << n * (n+1) / 2 * (2 * n+1) / 3 << endl;
		cin >> n;
	}
}