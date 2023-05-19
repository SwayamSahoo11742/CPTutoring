#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while ( t--)
    {
       int n,m;cin>>n>>m;
       vector<int>v[m];
       for ( int i = 0; i <  n; i++)
       {
            for ( int j = 0; j <  m; j++){
                int x; cin >> x;
                v[j].push_back(x);
            }
        }

        for(int i = 0; i < m; i++){
            sort(v[i].begin(), v[i].end());
        }

        int ans = 0;
        for(int i = 0; i < m; i++){
            vector<int> res(n, 0);
            res[n-1] = v[i][n-1];
            for(int j = n-2; j >= 0; j--){
                res[j] = res[j+1] + v[i][j];
            }

            for(int j=0; j < n-1; j++){
                int temp = res[j+1] - (n-1-j)*v[i][j];
                ans+=temp;
            }
        }

        cout << ans << endl;

    }
}