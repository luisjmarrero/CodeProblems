#include <iostream>

using namespace std;

bool Lucky(int i){

	bool flag = true; 


	do {	
		if (i%10 == 4 || i%10 == 7 ) flag = true;
		else flag = false; 
		i /= 10;
	} while (i > 0 && flag == true);

	return flag;
}

bool AlmostLucky(int n){
	bool almost = false;
	int i = 4; // counter
	while (i <= n && almost == false){
		if (n%i == 0 && Lucky(i) == true) almost = true;
		else i++;
	}
	return almost;
}

int main() 
{
	// codeforeces - Lucky Division

	int n;
	cin >> n;

	if (AlmostLucky(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
		
}