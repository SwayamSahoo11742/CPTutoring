#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int pl = 0, idx = 1, pr = 0;
        long long ans = 0; 

        while(pr < n){
            while(pl<n && idx > a[pr]){
                pl++;
                idx--;
            }
            ans += (pr-pl+1);
            idx++;
            pr++;
        }

        cout << ans << endl;
    }
}