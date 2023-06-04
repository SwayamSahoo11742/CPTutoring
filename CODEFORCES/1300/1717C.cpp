#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        string ans = "YES";
        for(int i = n-1; i>= 0; i--){
             if (a[i]>b[i] || (a[i]<b[i] && b[i]>b[(i+1)%n]+1)){
                ans = "NO";
             }
        }
        cout << ans << endl;
    }
}