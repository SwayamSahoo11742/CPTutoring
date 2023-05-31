#include <bits/stdc++.h>

 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
    
    long long M=998244353;
    long long mod(long long x){
        return ((x%M + M)%M);
    }
    long long add(long long a, long long b){
        return mod(mod(a)+mod(b));
    }
    long long mul(long long a, long long b){
        return mod(mod(a)*mod(b));
    }
    
    int getCount(int x){
        int total=0;
        while(x%2==0){
            x/=2;
            total++;
        }
        return total;
    }
    
    void solve (){
        int n;
        cin>>n;
        long long x=0,extra=0;
        vector<int>a(n),b;
        for(int i=0;i<n;i++){
            cin>>a[i];
            x+= getCount(a[i]);
            int cnt = getCount(i+1);
            extra += cnt;
            b.push_back(cnt);
        }
        if(x>=n){
            cout<<0<<"\n";
            return;
        }
        if(x+extra < n){
            cout<<-1<<"\n";
            return;
        }
        int ans=0;
        sort(b.rbegin(),b.rend());
        for(auto i : b){
            ans++;
            if(x+i>=n) break;
            x+=i;
        }
        cout<<ans<<"\n";
        
    }
    
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
        int t;
        cin>>t;
        for(int i=1;i<=t;i++){
            solve();
        }
        return 0;
    }