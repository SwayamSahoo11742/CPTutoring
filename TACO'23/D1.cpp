#include<bits/stdc++.h>
using namespace std;
 
 
int dp[2][10002], prim[55];
 
int sumdig[10002], rest[10002];
 
const int mod = 1000000007;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    if(n == 1)
    {
        cout << 10;
        return 0;
    }
    if(n == 2)
    {
        cout << 90;
        return 0;
    }
    if(n == 3)
    {
        cout << 900;
        return 0;
    }
    
    for(int i = 2; i <= 50; i++)
    {
        prim[i] = 1;
        for(int j = 2; j * j <= i; j++)
            if(i % j == 0)
                prim[i] = 0;
    }
    
    
    for(int i = 0; i <= 9999; i++)
    {
        int sum = 0;
        int j = i;
        while(j)
        {
            sum += j%10;
            j /= 10;
        }
        if(prim[sum])
        {
            dp[0][i] = 1;
        }
        sumdig[i] = sum;
        rest[i] = i % 1000;
    }
    
    for(int i = 5; i <= n; i++)
    {
        for(int j = 0; j <= 9999; j++)
        {
            if(!prim[sumdig[j]])
                continue;
            int val = rest[j];
            for(int nxt = 0; nxt <= 9; nxt++)
            {
                val = rest[j] * 10 + nxt;
                if(prim[sumdig[val]])
                {
                    dp[1][val] += dp[0][j];
                    if(dp[1][val] >= mod)
                        dp[1][val] -= mod;
                }
            }
        }
        
        for(int j = 0; j <= 9999; j++)
        {
            dp[0][j] = dp[1][j];
            dp[1][j] = 0;
        }
    }
    
    int ans = 0;
    for(int j = 0; j <= 9999; j++)
    {
        ans = ans + dp[0][j];
        if(ans >= mod)
            ans -= mod;
    }
    
    cout << ans;
    return 0;
}