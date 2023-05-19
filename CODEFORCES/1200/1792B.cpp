#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        long long a, b, c, d; cin >> a >> b >> c >> d;

        cout << (a?a+min(a+1,d+max(b,c)-min(b,c))+2*min(b,c):1) << endl;
    }
}