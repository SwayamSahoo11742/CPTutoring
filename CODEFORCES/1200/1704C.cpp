#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;

int T,n,m;
int a[N];
int c[N],cnt;

signed main(){
	cin>>T;
	while(T--){
		cin>>n>>m;
		int ans=0;
		for(int i=1;i<=m;++i) cin>>a[i];
        sort(a+1,a+m+1);
		for(int i=1;i<m;++i) c[i]=a[i+1]-a[i]-1;
		c[m]=a[1]-1+n-a[m];
		sort(c+1,c+m+1);
		for(int i=m;i;--i){
            if(c[i]-(m-i)*4==1) ++ans;
			else ans+=max(0,c[i]-(m-i)*2-(m-i)*2-1);
		}
		cout<<n-ans<<endl;
	}
}