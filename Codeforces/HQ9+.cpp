#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // code forces - HQ9+
    
    char p[101];
    int x = 0;
    
    cin >> p;
    
    for (int i = 0; i < strlen(p); i++)
    {
        if (p[i] == 'H') x = 1;
        else if (p[i] == 'Q') x = 1;
        else if (p[i] == '9') x = 1;
    }
    
    if (x) cout << "YES \n";
    else cout << "NO \n";
    
}