#include <bits/stdc++.h>
using namespace std;
const int N = 1e5, LOG = 17;
int main(){
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int p[N][LOG];
    p[n][0] = n;
    vector<int>s;
    for(int i = 0; i < n; i++){
        while(s.size() && a[s.back()]<= a[i]){
            s.pop_back();
        }
        p[i][0] = s.empty()? n:s.back();
        s.push_back(i);
    }
    for(int l=1; l<LOG; l++){
        for(int i = 0; i<=n; i++){
            p[i][l] = p[ p[i][l-1] ][l-1];
        }
    }

    while(q--){
        int l, r; cin >> l >> r; l--; r--;
        int c = 0;
        for(int i = 0; i < LOG; i++){
            if(p[i][l]<=r){
                c^=1<<i, l = p[i][l];
            }
            cout << c+1 << endl;
        }
    }
    
}