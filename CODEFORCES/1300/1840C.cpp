#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T; cin >> T;
    while(T--){
        int n, k, q; cin >> n >> k >> q;
        vector<ll>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<ll> vals;
        ll val = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] > q || i == n-1){
                if(a[i] <=q){
                    val++;
                }
                if(val >= k){
                    vals.push_back(val);
                }
                val = 0;
            }
            else{
                val++;
            }
        }
        ll ans = 0;
        for(ll i : vals){
            ll n = (i-k)+1;
            ans+= (n*(n+1))/2;
        }
        cout << ans <<endl;
    }
}