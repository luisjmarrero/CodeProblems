#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    // code forces - Stones on the Table

    int n, neig = 0;
    cin >> n;
    
    char row[n+1];
    cin >> row;
    
    for (int i = 1; i < n; i++)
    {
        if (row[i-1] == row[i]) neig++;
    }
    
    cout << neig << "\n";
    
    
}