#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> cnt;
    set<int> b;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i]]++;
        b.insert(a[i]);
        b.insert(a[i] + 1);
    }
    int last = 0;
    int res = 0;
    for (auto x: b) {
        int c = cnt[x];
        res += max(0, c - last);
        last = c;
    }
    cout << res << '\n';
}

int main(int argc, char* argv[]) {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
}
