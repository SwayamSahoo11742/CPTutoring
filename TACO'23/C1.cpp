#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    long long ct = 0;
    while(n != 1){
        if(n % 3 == 2 && n>2){
            n-=2;
            n /=3;
            ct++;
        }else{
            n--;
            ct++;
        }
    }
    cout << ct << endl;
}