#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int ind0 = n - ((((n*(n-1))/2) - 1) % n);
        if(ind0 == 0){
            cout << 0 << " ";
        }else{
            cout << ind0 << " ";
        }

        for(int i = 2; i <= n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
}