#include <bits/stdc++.h>
using namespace std;
long long t,n,a,last;
bool flag;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		last=0; flag=true;
		for(int i=0;i<n;i++){
			cin>>a;
			if(last<0||(last==0&&a!=0&&i!=0)) 
            flag=false;
			last+=a;
		}
		if(last!=0) flag=false;
		cout<<((flag)?"Yes":"No")<<endl;
	}
	return 0;
}