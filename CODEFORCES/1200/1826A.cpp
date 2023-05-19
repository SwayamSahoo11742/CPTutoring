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
        int ans = -1;

        for(int i = 0; i < n; i++){
            int ct = 0;
            for(int j = 0; j < n; j++){
                if(a[j] > i){
                    ct++;
                }
            }

            if(i == ct){
                ans = i;
                break;
            }
        }cout << ans <<endl;
    }
}