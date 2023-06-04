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
        if(a[n-1] == 1){
            cout << "NO" << endl;
            continue;
        }
        vector<int> cur;
        int s = 0;
        cout << "YES" << endl;
        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                s++;
            }else{
                cur.push_back(s);
                for(int j = 0; j < s; j++){
                    cur.push_back(0);
                }
                s=0;
            }
        }
        reverse(cur.begin(), cur.end());
        for(int i : cur){
            cout << i << " ";
        }
        cout << endl;
    }
}