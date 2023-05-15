#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    
ll test;
cin>>test;
for(ll t=0;t<test;t++){
ll n;
cin>>n;
ll a[n];
ll b[n];
for(ll i=0;i<n;i++)cin>>a[i];
for(ll i=0;i<n;i++)cin>>b[i];
 
sort(a,a+n);
sort(b,b+n);
ll j=n-1;
ll to=1;
for(ll i=n-1;i>=0;i--){
    while(j>=0&&a[j]>b[i]){
        j--;
    }
 
to*=i-j;
to%=1000000007;
}
cout<<to<<endl;
}
}