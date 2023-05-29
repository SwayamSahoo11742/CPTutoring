#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        int u = 0;
        for(int i = 0; i < n ;i++){
            cin >> a[i];
            if(a[i] == a[0]){
                u++;
            }
        }
        if(a[0] != *min_element(a.begin(), a.end()) && u != n){
            cout << "ALICE" << endl;
        }else{
            cout << "BOB" << endl;
        }
    }
}