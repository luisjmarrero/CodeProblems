#include <iostream>

using namespace std;

// codeforces_A. Cheap Travel

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b ;
    
    if ((m*a) <= b) cout << n*a << endl;
    else
    {
        int x = ((n/m)*b) ;
        int res = ((n%m)*a);  // tickes individuales restantes
        // es mejor comprar otro special ticket y no usarlo entero
        // o comprar tickets indivudales
        int answer = (x+b < x+res)? x+b : x+res;
        cout << answer << endl;
    }
    return 0;
}