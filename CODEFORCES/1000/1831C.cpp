#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > adj[200005];
int ans;
void dfs(int x, int t, int c, int p){
	ans=max(ans,c);
	for(auto i:adj[x]){
		if(i.first==p) continue;
		if(i.second<t) dfs(i.first,i.second,c+1,x);
		else dfs(i.first,i.second,c,x);
	}
}
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0; i<=n; i++) adj[i].clear();
		for(int i=0; i<n-1; i++){
			int a,b;
			cin >> a >> b;
			adj[a].push_back({b,i});
			adj[b].push_back({a,i});
		}
		ans=0;
		dfs(1,1000000,0,-1);
		cout << ans << '\n';
    }
}