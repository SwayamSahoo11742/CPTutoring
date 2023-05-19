#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    n = unique(a.begin(), a.end()) - a.begin();
    int ans = n;
    for (int i = 0; i + 2 < n; ++i) {
      ans -= (a[i] < a[i + 1] && a[i + 1] < a[i + 2]);
      ans -= (a[i] > a[i + 1] && a[i + 1] > a[i + 2]);
    }
    cout << ans << '\n';
  }
}