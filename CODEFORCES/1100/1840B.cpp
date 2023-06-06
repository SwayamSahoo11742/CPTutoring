#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n,k; cin >> n >> k;
        if(log2(n) < k){
            cout << n+1 << endl;
        }else{
            cout << (int)pow(2,k)<<endl;
        }
    }
}