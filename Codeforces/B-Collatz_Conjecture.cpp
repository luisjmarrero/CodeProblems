#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

vector<long long>cme;

vector<long long> cadenaCollatz(long long me){
    vector<long long> v;
    v.push_back(me);
    while(me>1){
        if(me%2==0)
            me/=2;
        else
            me=3*me+1;
        v.push_back(me);
    }
    return v;
}

bool busca(long long me, long long &posme, long long &enc){
    for(long long i=0; i<cme.size(); i++){
        if(me==cme[i]){
            enc=cme[i];
            posme=i;
            return 1;
        }
    }
    return 0;
}

long long cadenaCollatz2(long long ma, long long &posme, long long &enc){
    long long cont=0;
    if(busca(ma, posme, enc)){
            return cont;
    }
    while(ma>1){
        if(ma%2==0)
            ma/=2;
        else
            ma=3*ma+1;
        cont++;
        if(busca(ma, posme, enc))return cont;
    }
    cont++;
    return cont;
}

int main()
{
    // B-Collatz Conjecture
    long long posme;
    long long enc;
    long long a, b, me, ma;
    cin >> a >> b;
    while(a!=0 && b!=0){
        cme.clear();
        me=a;
        ma=b;
        cme=cadenaCollatz(me);
        long long temp = cadenaCollatz2(ma, posme, enc);
        cout << a <<" needs " << posme <<" steps, " << b << " needs " << temp << " steps, they meet at " << enc << endl;
        cin >> a >> b;
    }
    return 0;
}