#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        int ans = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int j = n-1;
        for(int i = n-1; i >= 0; i--){
            if(a[i] != b[j]){
                ans++;
                continue;
            }
            j--;
        }
        cout << ans << endl;
    }
}