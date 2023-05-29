#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
	int n; cin >> n;
	vector<int> a(n + 1), b(n + 1);
	vector<int> fa(2*n + 1), fb(2*n + 1);
	int now = 1;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(a[i] == a[i - 1])
			now++;
		else now = 1;
		fa[a[i]] = max(fa[a[i]], now);
	}
	now = 1;
	for(int i = 1; i <= n; i++) {
		cin >> b[i];
		if(b[i] == b[i - 1])
			now++;
		else now = 1;
		fb[b[i]] = max(fb[b[i]], now);
	}
	int ans = 0;
	for(int i = 1; i <= 2*n; i++) ans = max(ans, fa[i] + fb[i]);
	cout << ans << endl;
}
 
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}