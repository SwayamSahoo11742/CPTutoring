#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        priority_queue<int> pq;
        for(int i = 0; i < n; i++){
            pq.push(-1 * a[i]);
            while(pq.size() > -1 * pq.top()){
                pq.pop();
            }
            int s = pq.size();
            cout << max(1, s) << " ";
        }
        cout << endl;
    }
}