#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    // codeForces - (A) Team
    
    long long n;
    cin >> n;
    int f[3][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++) {
            cin >> f[j][i];
        }
    }
    int d = 0;
    for (int i = 0; i < n; i++){
        int c = 0;
        for (int j = 0; j < 3; j++) {
            c += f[j][i];
        }
        if (c >= 2) d++;
    }
    
    cout << d << '\n';
    
}