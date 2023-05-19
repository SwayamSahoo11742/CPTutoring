#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int ans = -1;
        vector<int> a(n);
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if(x != i){
                if(ans == -1){
                    ans = abs(i-x);
                }else{
                    ans = gcd(ans, abs(i-x));
                }
            }
        }

        cout << ans << endl;

        
    }
}