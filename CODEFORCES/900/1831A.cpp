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
        int last = a[n-1];
        for(int i = 0; i < n; i++){
            cout << (n+1) - a[i] << " ";
        }
    }
}