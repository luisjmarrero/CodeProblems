#include <iostream>

using namespace std;

int main() {
    
    // codeforces - Pashmak and Flowers

    long long n, dif = 0, me=1000000001, ma=0, cant1=0, cant2=0, r, f, i;
    cin >> n ;

    for (i = 0; i < n; i++)
    {
        cin >> f;
        if(f<=me)
        {
            if(f!=me)
                cant1=1;
            else
                cant1++;
            me=f;
        }
        if(f>=ma)
        {
            if(f!=ma)
                cant2=1;
            else
                cant2++;
            ma=f;
        }
    }
    if(ma==me)
        r=(n*(n-1))/2;
    else
    r=cant1*cant2;

    dif=ma-me;
    cout << dif << " " << r << endl;
}