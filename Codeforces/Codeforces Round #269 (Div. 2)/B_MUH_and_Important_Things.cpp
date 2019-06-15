#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

#define INF 2000000000

using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef vector <long long> vll;

struct Tank{
    int dif, orden;

    Tank (int _dif, int _orden){
        dif = _dif;
        orden = _orden;
    }
};

bool menor_que(Tank a, Tank b){

    if ((a.dif != b.dif)){
        if (a.dif < b.dif) return true;
        else return false;
    }
    else if ((a.orden != b.orden)){
        if (a.orden < b.orden) return true;
        else return false;
    }

    return false;
}

int arr[2010];
vector <Tank> tanks;

int main()
{
    // B - MUH and Important Things
    int n;
    scanf("%d", &n);
    int rep = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        int b = i;
        tanks.push_back(Tank(a,b));

        arr[a]++;
        if (arr[a] > 1) rep++;
    }

    if (rep < 2 || n < 3) {
        printf("NO\n");
        return 0;
    }

    printf("YES\n");
    sort(tanks.begin(), tanks.end(), menor_que);
    // primera secuencia
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tanks[i].orden);
    }
    printf("\n");
    // segunda secuencia
    int j;
    for (j = 0; j < n-1; j++){
        if (tanks[j].dif == tanks[j+1].dif){
            swap(tanks[j], tanks[j+1]);
            //k = j;
            break;
        }
    }

    for (int m = 0; m < n; m++){
        printf("%d ", tanks[m].orden);
    }

    printf("\n");
    // tercera scuencia
    for (int k = j+1; k < n-1; k++)
    {
        if (tanks[k].dif == tanks[k+1].dif){
            swap(tanks[k], tanks[k+1]);
            break;
        }
    }

    for (int m = 0; m < n; m++)
    {
        printf("%d ", tanks[m].orden);
    }

    return 0;
}