#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    // codeForces - Theathre square
    long long n, m, a;
    cin >> n >> m >> a;
    long long b;
    if (m%a > 0) b = (m/a) + 1;
    else b = m/a;
    long long c;
    if (n%a > 0) c = (n/a) + 1;
    else c = n/a;
    
    cout << (b*c) << '\n' ;
} 