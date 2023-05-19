#include <bits/stdc++.h>
using namespace std;
int main(){
    long long T; cin >> T;
    while(T--){
        long long n,c,d; cin >> n >> c >> d;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        vector<long long> new_a;
        long long ans = 0, i = 0;
        while(i < n){
            new_a.push_back(a[i]);
            long long curr = a[i];
            while(i < n && a[i] == curr){
                i++;
                ans += c;
            }
            ans-=c;
        }
        long long m = new_a.size();
        long long temp_ans = LLONG_MAX;
        for(long long i = 0; i < m; i++){
            long long x = m - 1 - i;
            long long y = new_a[i] - i - 1;
            temp_ans = min(temp_ans, ans+x*c + y*d);
        }
        temp_ans = min(temp_ans, n*c+d);

        cout << temp_ans<< endl;
    }
}