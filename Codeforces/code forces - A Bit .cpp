#include <cstdio>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    // code forces - A. Bit++
    
    long x = 0, n;
    char a,b,c;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        
        if ((a == 'X' && b == '+') || a == '+') x++;
        else if ((a == 'X' && b == '-') || a == '-') x--;
       
    }
    
    cout << x << "\n";
}