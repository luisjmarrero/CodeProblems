// codeforces _ k-Tree

#include <iostream>

using namespace std;

const int mod = 1000000007;

int dp[100][2];

void sumar(int &a, int b)
{
    a += b;
    if(a >= mod)
        a -= mod;
}

int main(int argc, char ** argv)
{
    int n, k, d;
    cin >> n >> k >> d;
    dp[0][0] = 1;
    dp[0][1] = 0;
    
    for(int i = 1 ; i <= n ; ++i)
    {
        dp[i][0] = dp[i][1] = 0;
        
        for(int j = 1 ; j <= k ; ++j)
        {
            if(i-j < 0) break;
            
            if(j < d)
            {
                sumar(dp[i][0], dp[i-j][0]);
                sumar(dp[i][1], dp[i-j][1]);
            }
            else
            {
                sumar(dp[i][1], dp[i-j][0]);
                sumar(dp[i][1], dp[i-j][1]);
            }
        }
    }
    cout << dp[n][1] << endl;;
}