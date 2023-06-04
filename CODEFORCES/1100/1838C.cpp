#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    for(int tc = 1; tc <= t; ++tc) {

        int n, m; cin >> n >> m;

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                if(i % 2 == 0) cout << (n / 2 + i / 2) * m + j + 1 << ' ';
                else cout << (i / 2) * m + j + 1 << ' ';
            }
            cout << '\n';
        }
    }
}