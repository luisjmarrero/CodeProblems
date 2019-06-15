#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

 long long  triangulos(long long a, long long b){
    long long comb1, comb2;
        comb1=a*(a-1)/2;
        comb1*=b;
        comb2=b*(b-1)/2;
        comb2*=a;
    return  comb1+comb2;
}

 long long  cuadrados( long long a,  long long b){
     long long  comb1;
        comb1=a*(a-1)/2;
        comb1*=b*(b-1)/2;
    return  comb1;
}


int main()
{
	// Triangles and Quadrilaterals
     long long  a, b, comb1, comb2;
    while(cin >> a >> b){

        cuadrados(a, b);
        cout << "Triangles: " << triangulos(a, b) << endl;
        cout << "Quadrilaterals: " << cuadrados(a, b) << "\n\n";
    }
    return 0;
}
