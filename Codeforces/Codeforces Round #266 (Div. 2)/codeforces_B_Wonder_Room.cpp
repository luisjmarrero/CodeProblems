#include <iostream>
#include <cmath>

using namespace std;

typedef long long LL;

// codeforces_B_Wonder_Room

int main()
{
    ios_base::sync_with_stdio(false);
    LL n, a, b;
    cin >> n >> a >> b;
    if ((6*n) <= (a*b)) {
        cout << a*b << "\n" << a << " " << b << endl;
        return 0;
    }
  //  if (area % a == 0) b = area/a;
  //  else if (area % b == 0) a = area/b;
    else {
        bool change = false;
        if (a > b) { swap(a,b); change = true; }
        LL area = 6*n;
        LL minArea = 1e18, temp, bn, an;
        for (LL i = a; i <= sqrt(area); i++){
            temp = area / i;
            if (temp * i < area) temp++;
            if (temp < b) continue;
            if (temp * i < minArea) {
                minArea = temp * i;
                an = i;
                bn = temp;
            }
        }
        if (change) swap(an, bn);
        cout << minArea << "\n" << an << " " << bn << endl;
        return 0;
    }

   // cout << area << "\n" << a << " " << b << endl;

    return 0;
}
