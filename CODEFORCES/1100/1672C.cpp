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
        int l = -1, r = -1;
        for(int i = 0; i < n - 1; i++){
            if(a[i] == a[i+1]){
                if(l == -1){
                    l = i;
                }
                    r=i;
                
            }
        }

        if(l == r || (l == -1 || r == -1)){
            cout << 0 << endl;
        }else{
            cout << max(r - l - 1, 1) <<endl;
        }
    }
}