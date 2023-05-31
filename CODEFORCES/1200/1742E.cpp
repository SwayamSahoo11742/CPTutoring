#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, q; cin >> n >> q;
        vector<long long> a(n), pref, pmax(n);
        pref.push_back(0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            pref.push_back(pref.back() + a[i]);
            if(i==0){
                pmax[i] = a[i];
            }else{
                pmax[i] = max(pmax[i-1], a[i]);
            }
        }

        for(int i = 0; i < q; i++){
            int k; cin >> k;
            int idx = upper_bound(pmax.begin(), pmax.end(), k)-pmax.begin();
            cout << pref[idx] << " ";            
        }
        cout << endl;
    }
}