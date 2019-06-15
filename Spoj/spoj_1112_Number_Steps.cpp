// spoj_1112_Number_Steps
// luisjmarreo

#include <iostream>

using namespace std;

int main()
{
	int linea1[10000];
	linea1[0] = 0;
	int linea2[10000];
	linea2[0] = 2;
	int pos = 1;
	while(pos < 9999)
	{
		linea1[pos] = linea1[pos-1] + 1;
		linea2[pos] = linea2[pos-1] + 1;
        pos++;
		linea1[pos] = linea1[pos-1] + 3;
		linea2[pos] = linea2[pos-1] + 3;
        pos++;
	}
    
	int T;
	cin >> T;
    
	for (int t = 0; t < T; t++)
	{
		int x, y;
		cin >> x >> y;

		if (x == y) cout << linea1[x] << endl;
		else if ((y+2) == x) cout << linea2[x-2] << endl;
		else cout << "No Number" << endl;
	}
}