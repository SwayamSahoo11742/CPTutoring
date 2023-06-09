#include <bits/stdc++.h>
using namespace std;

int a[110][110];

int main() {
	
	int T; cin>>T;
	while ( T-- ){
        int n; cin>>n;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++) scanf("%1d",&a[i][j]);
        int ans=0;
        for (int i=1;i<=(n+1)/2;i++)
            for (int j=1;j<=n/2;j++) {
                int res=a[i][j]+a[j][n-i+1]+a[n-j+1][i]+a[n-i+1][n-j+1];
                ans+=min(res,4-res);
            }
        cout<<ans<<"\n";
    }
	
	return 0;
}
