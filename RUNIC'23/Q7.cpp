#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = min(n, x);
    }

    long long perm = 1;

    sort(a.begin(), a.end(), greater<>());
    for(int i = 0; i < n; i++){
        perm = (perm * (a[i] - (n-1-i))) % MOD;
    }
    cout << perm << endl;

    return 0;
}
