#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,n; cin >> x >> y >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0, count = 0;
    for(int i = 0; i < n; i++){
        if(count + a[i] > y){
            ans++;
            count = 0;
        }
        count += a[i];
    }
    cout << ans << endl;
}