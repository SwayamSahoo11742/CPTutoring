#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n; 
        string s; cin >> s;
        int ans = 0;
        for(int i = 1; i < n*2; i++){
            if(s[i] == '(' && s[i-1] == '('){
                ans++;
            }
        }
        cout << ans+1 << endl;
    }
}