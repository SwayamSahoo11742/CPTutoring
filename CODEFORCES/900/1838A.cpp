#include <bits/stdc++.h>
using namespace std;

int t,n,a[1000005],ans;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i = 1;i <= n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a + 1,a + n + 1);
		if(a[1] < 0)
		{
			printf("%d\n",a[1]);
		} 
		else printf("%d\n",a[n]);
	}
}