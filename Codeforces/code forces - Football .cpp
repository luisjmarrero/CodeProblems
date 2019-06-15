#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // code forces - Football

    char imp[102];
    int seg = 1, aux = 0;
    
    cin >> imp;
    
    for (int i = 1; i < strlen(imp); i++)
    {
        
        if (imp[i] == imp[i-1]) seg++;
        else seg = 1;
        
        if (seg >= 7)
        {
            aux = seg;
        }
    }
    
    if (aux >= 7)
    {
        cout << "YES \n";
    }
    else
    {
        cout << "NO \n" ;
    }
    
    
}