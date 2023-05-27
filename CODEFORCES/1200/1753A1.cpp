
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t=1;
	cin>>t;
	while( t-- ){
		int x;
		cin>>x;
		int a[x];
		for( int i=0; i<x; i++ )
		cin>>a[i];
		if( x % 2 ){
			cout<<"-1"<<endl;
			continue;
		}
		vector<pair<int,int>> v;
		for( int i=0; i<x; i+=2 ){
			if( a[i] == a[i+1] ){
				v.push_back({i+1, i+2});
			}else {
				v.push_back({i+1, i+1});
				v.push_back({i+2, i+2});
			}
		}
		cout<<v.size()<<endl;
		for( auto [l, r] : v )
		    cout<<l<<" "<<r<<endl;
	}
}