#include <bits/stdc++.h>

using namespace std;

const int MAXM = 300300;

int n, m;
int arr[MAXM];

int solve(int l, int r) {
	if (r - l == 1) return 0;
	int mid = (l + r) >> 1;
	int mal = *max_element(arr + l, arr + mid);
	int mar = *max_element(arr + mid, arr + r);
	int ans = 0;
	if (mal > mar) {
		++ans;
		for (int i = 0; i < (mid - l); ++i)
			swap(arr[l + i], arr[mid + i]);
	}
	return solve(l, mid) + solve(mid, r) + ans;
}

int solve() {
	int ans = solve(0, m);
	if (is_sorted(arr, arr + m))
		return ans;
	return -1;
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> m;
		for (int i = 0; i < m; ++i)
			cin >> arr[i];
		cout << solve() << endl;
	}
}