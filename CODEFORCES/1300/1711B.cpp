
#include<bits/stdc++.h>
using namespace std;
 
#define ll long  long
 
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> frnds[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=1e18;
    for(ll i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        x--;y--;
        frnds[x].push_back(y);
        frnds[y].push_back(x);
        ans=min(ans,a[x]+a[y]);
    }
    if(m%2==0){cout<<0<<endl;return;}
    for(ll i=0;i<n;i++){
        if(frnds[i].size()%2==1){
            ans=min(ans,a[i]);
        }
    }
    cout<<ans<<endl;
}
    
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}