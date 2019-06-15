#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// codeforces - taxi

int groups[4];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1) groups[0]++;
        else if (x == 2) groups[1]++;
        else if (x == 3) groups[2]++;
        else groups[3]++;
    }
    int answer = 0;
    // taxis con grupos de 4
    answer += groups[3];
    // taxis con 3 && 1
    (groups[2] >= groups[0])? groups[0] = 0 : groups[0] -= groups[2];
    answer += groups[2];
    // grupos de 1 en grupos de dos + los grupos de 2
    groups[1] += (groups[0] / 2);
    groups[0] %= 2;
    // taxis de 2 con 2
    answer += groups[1]/2;
    groups[1]%=2;
    // taxis con los restantes
    if ((groups[0]+groups[1]) > 0 )
    {
        if (((groups[0]+groups[1]) > 0 ) <= 4) answer++;
        else
        {
            answer += ((groups[0]+groups[1])/4);
            if (((groups[0]+groups[1])%4) > 0) answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
