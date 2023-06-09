#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a, pos, neg;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x>0){
                pos.push_back(x);
            }else if(x < 0){
                neg.push_back(x);
            }else{
                if(a.size() < 2){
                    a.push_back(x);
                }
            }
        }
        if(neg.size() > 2 || pos.size() > 2){
            cout << "NO" << endl;
            continue;
        }
        for(int i : neg){
            a.push_back(i);
        }
        for(int i : pos){
            a.push_back(i);
        }

        int m = a.size();
        string ans = "YES";
        for(int i = 0; i < m; i++){
            for(int j = i+1; j < m; j++){
                for(int k = j+1; k < m; k++){
                    int tot = a[i]+a[j]+a[k];
                    bool ok = 0;
                    for(int l = 0; l < m; l++){
                        if(a[l] == tot){
                            ok = 1;
                        }
                    }
                    if(!ok){
                        ans = "NO";
                        break;
                    }
                }
            }
        }
        cout << ans << endl;


    }
}