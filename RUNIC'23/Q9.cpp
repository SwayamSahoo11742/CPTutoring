#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> x(n);
    vector<pair<int, int>> p;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    for(int i = 0; i < m; i++){
        int inta, intb; cin >> inta >> intb;
        pair<int,int> interval = {inta, intb};
        p.push_back(interval);
    }

    for(int i = 0; i < m; i++){
        int a = p[i].first;
        int b = p[i].second;
        int ans = 0;
        for(int j = a; j <= b; j++){
            for(int k = j; k <= b; k++){
                if(k != j){
                    ans = max(ans, x[k-1] - x[j-1]);
                }
            }
        }

        cout << ans << endl;
    }


}