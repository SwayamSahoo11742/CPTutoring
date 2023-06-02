#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        int n = s.size();
        char minI = '9';
        for(int i = n-1; i >= 0; i--){
            if(s[i] <= minI){
                minI = s[i];
            }else{
                s[i] = min((char)(s[i] + 1), (char)'9');
            }
        }
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}