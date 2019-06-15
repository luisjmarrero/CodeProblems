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

int sticks[12];

int main()
{
    // A_MUH and Sticks
    bool alien = true;
    for (int i = 0; i < 6; i++)
    {
        int x;
        scanf("%d", &x);
        sticks[x]++;
        if (sticks[x] == 4) {
            alien = false;
            sticks[x] -= 4;
        }
    }

    if (alien) {
            printf("Alien\n");
            return 0;
        }

    bool elephant = false;
    for (int j = 0; j <= 9; j++)
    {
        if (sticks[j] == 2) {
            elephant = true;
            break;
        }
    }

    if (elephant) printf("Elephant\n");
    else printf("Bear\n");

    return 0;
}