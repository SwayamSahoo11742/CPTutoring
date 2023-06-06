#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n; cin >> n;
        string s; cin >> s;
        string ans;
        char ini = '#';

        for(int i = 0; i < n; i++){
            if(ini == '#'){
                ini = s[i];
                continue;
            }
            if(s[i] == ini){
                ans.push_back(s[i]);
                ini = '#';
            }
        }
        cout << ans << endl;
    }
}