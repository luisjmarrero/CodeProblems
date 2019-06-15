//	spoj_1028_Hubulullu
//	luisjmarrero

#include <iostream>
using namespace std;

int main() 
{	
	long T;
	cin >> T;
	for (long t = 0; t < T; t++)
	{
		long n, start;
		cin >> n >> start;
		if (start == 0) 
			cout << "Airborne wins." << "\n";
		else
			cout << "Pagfloyd wins." << "\n";
 	}
}
