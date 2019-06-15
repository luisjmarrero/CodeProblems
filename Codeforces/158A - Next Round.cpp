#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    // codeForces - Next Round
    
    int k, n;
    cin >> n >> k;
    int a[n+1];
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    int c = 0;
    
    for (int i = 1; i <= n; i++)
        if (a[i] >= a[k] && a[i] > 0) c++;
    
   cout << c << '\n';
}