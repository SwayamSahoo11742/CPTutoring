#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int &i: a)
        cin >> i;
    int l = 0, r = n - 1;
    int mn = 1, mx = n;
    while (l <= r) {
        if (a[l] == mn) {
            l++;
            mn++;
        } else if (a[l] == mx) {
            l++;
            mx--;
        } else if (a[r] == mn) {
            r--;
            mn++;
        } else if (a[r] == mx) {
            r--;
            mx--;
        } else {
            break;
        }
    }
    if(l <= r){
        cout << l + 1 << " " << r + 1 << endl;
    } else{
        cout << -1 << endl;
    }
}

signed main() {
    int q = 1;
    cin >> q;
    while (q--)
        solve();
    return 0;
}