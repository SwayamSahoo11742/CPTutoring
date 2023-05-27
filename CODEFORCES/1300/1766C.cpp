#include<iostream>
using namespace std;
int n;
string s[2];
int g(int i,int j){
	if(j==n)return 1;
	if(s[i][j]!='B')return 0;
	if(s[1-i][j]=='B')return g(1-i,j+1);
	return g(i,j+1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>s[0]>>s[1];
		cout<<(g(0,0)|g(1,0)?"YES":"NO")<<endl;
	}
	return 0;
}