#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T; cin >> T;
    while(T--){
        ll n; cin >> n;
        map<ll, vector<ll>> m;
        for(int i = 0; i < n; i++){
            ll x, y; cin >> x >> y;
            m[x].push_back(y);
        }
        ll ans = 0;
        for (auto& pair : m) {
            std::sort(pair.second.begin(), pair.second.end(), greater<>());
            for(int i = 0; i < pair.second.size(); i++){
                if(i == pair.first){
                    break;
                }
                ans += pair.second[i];
            }
        }
        cout << ans << endl;
        
    }
}