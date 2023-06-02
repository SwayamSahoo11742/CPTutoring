#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> x(n), y(n);
        vector<pair<int,int>> dif(n);
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }
        for(int i = 0; i < n; i++){
            dif[i].first = y[i] - x[i];
            dif[i].second = i;
        }
        sort(dif.begin(), dif.end(), greater<>());

        int j = n-1, ct = 0;
        for(int i = 0; i < n; i++){
            while(j > i && dif[j].first+dif[i].first < 0){
                j--;
            }
            if(j<=i){
                break;
            }
            ct++;j--;
        }
        cout << ct << endl;
    }
}