#include <bits/stdc++.h>
using namespace std;
int main(){
  int T; cin >> T;
  while(T--){
    int n; cin >>n;
    vector<int> a;
    map<int,int>m;
    for(int i = 0; i < n; i++){
      int x; cin >> x;
      int dig = x%10;
      if(m[dig] <3){
        a.push_back(dig);
      }
      m[dig]++;
    }
    string ans = "NO";
    int s = a.size();
    for(int i = 0; i < s; i++){
      for(int j = i+1; j < s; j++){
        for(int k = j+1; k < s;k++){
          if((a[i]+a[j]+a[k])%10 == 3){
            ans = "YES";
            break;
          }
        }
      }
    }
    cout << ans << endl;
    
  }
}