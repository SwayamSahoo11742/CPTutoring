#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    while(q--){
        int l, r; cin >> l >> r;
        int hops = 1;
        int cur = a[l-1];
        
        for(int i = l; i <= r; i++){
            if(a[i-1] > cur){
                cur = a[i-1];
                hops++;
            }
        }
        cout << hops << endl;
    }
}