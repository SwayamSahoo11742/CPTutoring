#include <bits/stdc++.h>

using namespace std;

const int inf = 1000000000;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n, w, h;
    cin >> n >> w >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    int minshift = -inf;
    int maxshift = inf;
    for (int i = 0; i < n; i++) {
      minshift = max(minshift, (b[i] + h) - (a[i] + w));
      maxshift = min(maxshift, (b[i] - h) - (a[i] - w));
    }
    if (minshift <= maxshift) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}