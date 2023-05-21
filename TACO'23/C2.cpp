#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s = to_string(n-1);
    if(s[0] == '7'){
        cout << '6';
        for(int i = 0; i < s.size()-1; i++){
            cout << '9';
        }
        cout << endl;
    }else{
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '7'){
                cout << '6';
            }else{
                cout << s[i];
            }
        }
        cout <<endl;
    }
}