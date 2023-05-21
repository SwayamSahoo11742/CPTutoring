#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    int tot = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        int cur = -1;
        for(int j = i; j < n; j++){
            if(j!=i){
                if(a[j] > cur && a[j] < a[i]){
                    cur = a[j];
                    tot += abs(i-j);
                    cnt++;
                }
                if(a[j] > a[i]){
                    cnt++;
                    tot += abs(i-j);
                    break;
                }
            }
        }
        ans += cnt;
        cur = -1;
        cnt = 0;
    }
    cout << ans << " " << tot << endl;
}
