#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        long long n; cin >> n;
        string s; cin >> s;
        if(n == 1){
            cout << n << endl;
            continue;
        }
        long long ans = 0;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                ans += i;
            }
        }
        cout << ans+n << endl;

    }
}