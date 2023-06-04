#include <bits/stdc++.h>
using namespace std; 
int main(){
    int T; cin >> T;
    while(T--){
        int n, k; cin >> n >> k;
        cout << ceil((n-1 + k - 1)/k) + 1 << endl;
    }
}