#include<bits/stdc++.h>

using namespace std;
int T, n, i, j, cnt, t;
pair < int, int > a[101], ans[10001];
int main() {
  cin >> T;
  while (T--) {
    cin >> n;
    cnt = 0;
    t = 0;
    for (i = 1; i <= n; i++) cin >> a[i].first;
    for (i = 1; i <= n; i++) cin >> a[i].second;
    for (i = 1; i <= n; i++)
      for (j = 1; j <= n; j++)
        if (a[i] < a[j]) ans[++t] = {
          i,
          j
        }, swap(a[i], a[j]);
    for (i = 1; i < n; i++)
      if (a[i].first <= a[i + 1].first && a[i].second <= a[i + 1].second) cnt++;
    if (cnt == n - 1) {
      cout << t << "\n";
      for (i = 1; i <= t; i++) cout << ans[i].first << " " << ans[i].second << "\n";
    } else cout << -1 << "\n";
  }
}