#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n, s; cin >> n >> s;
        vector<pair<int,int>> pos;
        int ans = 0;
        int sum = 0;
        vector<int> a(n);
        pos.push_back(make_pair(0,-1));
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum+=a[i];
            if(a[i] ==1){
                pos.push_back(make_pair(sum, i));
            }
            if(sum >= s){
                int p=sum-s;
                pair<int,int>x = make_pair(p, -3);
                auto pt = lower_bound(pos.begin(), pos.end(), x);
                int z=i-(*pt).second;
                ans=max(ans,z);
            }
        }
        if(sum<s)
        {
            cout<<-1<<endl;
            continue;
        }
    cout<<n-ans<<endl;

    }
}