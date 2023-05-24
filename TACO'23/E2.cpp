#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        long long x,y,a,b,c; cin >> x >> y >> a >> b >> c;
        long long ans = 0;
        while(x != 0 || y != 0){
            if(x % 2 == 0 && y % 2 == 0){
                ans += min(c, ((x/2) * a) + ((y/2) * b));
                y /= 2;
                x /= 2;
            }else{
                if(x % 2){
                    ans+=a; x--;
                }
                if(y%2){
                    ans+=b; y--;
                }
            }
        }

        cout << ans << endl;
    }   
}