#include <bits/stdc++.h>
using namespace std;
#define N 200010

int idx[N];

int main() {

    int t; cin >> t;
    for(int tc = 1; tc <= t; ++tc) {

        int n; cin >> n;

        for(int i = 1; i <= n; ++i) {
            int x; cin >> x;
            idx[x] = i;
        }

        if(idx[n] < min(idx[1], idx[2])) {
            cout << idx[n] << ' ' << min(idx[1], idx[2]) << '\n';
        } else if(idx[n] > max(idx[1], idx[2])) {
            cout << idx[n] << ' ' << max(idx[1], idx[2]) << '\n';
        } else {
            cout << idx[1] << ' ' << idx[2] << '\n';
        }
    }
}