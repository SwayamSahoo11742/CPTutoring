#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        string s; cin >> s;
        string mark(n, '1');
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                for(int j = i+1; j <=n; j+=i+1){
                    if(s[j-1] == '1'){
                        break;
                    }

                    if(mark[j-1] == '0'){
                        continue;
                    }

                    mark[j-1] = '0';
                    ans += i+1;

                }
            }
        }

        cout << ans << endl;
    }
}