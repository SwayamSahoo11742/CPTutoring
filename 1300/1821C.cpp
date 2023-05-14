#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        string s; cin >> s;
        int n = s.length();
        int mini = INT_MAX;
        for(char i = 'a'; i <= 'z'; i++){
            int c = 0, maxi = 0;
            for(int j = 0; j < n; j++){
                if(s[j] != i){
                    c++;
                    if(c > maxi){
                        maxi = c;
                    }
                }else{
                    c = 0;
                }
            }
            mini = min(mini,maxi);
        }

        if(mini == 0){
            cout << 0 << endl;
        }else{
            int c = 0;
            while(mini != 1){
                mini /= 2;
                c++;
            }
            cout << c + mini<< endl;
        }
    }
}