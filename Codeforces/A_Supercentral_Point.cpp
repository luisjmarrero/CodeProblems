#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // 165A - Supercentral Point
    int n;
    int h[210], v[210];
    cin >> n;

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        h[i]=x;
        v[i]=y;
    }
    int cont=0;
    for(int i=0; i<n; i++)
    {
        int px=h[i];
        int py=v[i];
        int derecha=0;
        int izquierda=0;
        int arriba=0;
        int abajo=0;

        for(int j=0; j<n; j++){
            if(v[j]==py){
                if(h[j]>px) derecha=1;
                if(h[j]<px) izquierda=1;
            }
            if(h[j] == px){
                if(v[j]>py) arriba=1;
                if(v[j]<py) abajo=1;
            }
        }
        if(derecha && izquierda && arriba && abajo) cont++;
    }
    cout << cont << endl;
    return 0;
}