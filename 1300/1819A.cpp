#include<bits/stdc++.h>
using namespace std;
 
int n;
int a[202020];
 
bool sol(){
	map<int,int> l,r;
	cin>>n;
	for(int i=1; i<=n; ++i){
		cin>>a[i];
		if(!r[a[i]]) l[a[i]]=i;
		r[a[i]]=i;
	}
	int m=0;
	while(l[m]) ++m;
	if(!l[m+1]) return m!=n;
	for(int i=0; i<m; ++i){
		if(l[m+1]<l[i] && r[i]<r[m+1]) return 0;
	}
	return 1;
}
 
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin>>t;
	for(int i=0; i<t; ++i){
		if(sol()) cout<<"Yes\n";
		else cout<<"No\n";
	}
}