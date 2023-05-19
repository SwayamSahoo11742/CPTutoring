#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s;
        cin >> s;
        s = s.substr(0, s.size() / 2);
        int k = unique(s.begin(), s.end()) - s.begin();
        cout << (k == 1 ? "NO" : "YES") << '\n';
            
    }
}