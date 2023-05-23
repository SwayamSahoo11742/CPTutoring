
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define sp << ' ' <<
#define nl << '\n'

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    array<int, 2> a[n+m]; // array of both laps and people
    int ans[m] {};

    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(int i = 0; i < m; i++){
        cin >> a[n+i][0];
        a[n+i][1] = -i;
    }

    sort(a, a+n+m);
    int cur = -1;
    for(auto [x,y] : a){
        if(y > 0){
            cur = max(cur, x+y);
        }else{
            ans[-y] = max(ans[-y], cur - x);
        }
    }

    reverse(a, a+n+m);
    cur = 1e18;
    for(auto [x,y] : a){
        if(y > 0){
            cur = min(cur, x-y);
        } else {
            ans[-y] = max(ans[-y], x - cur);
        } 
    }

    for(int i :ans){cout << i  << endl;}
}