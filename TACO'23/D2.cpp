#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<pair<int, int>> pole(n);
    for (int i = 0; i < n; i++) {
        cin >> pole[i].first >> pole[i].second;
    }
    
    sort(pole.begin(), pole.end()); // Sort the pole vector based on the first element (position)
    
    vector<int> ppl(m);
    for (int i = 0; i < m; i++) {
        cin >> ppl[i];
    }
    
    for (int i = 0; i < m; i++) {
        int ma = 0;
        
        auto it = lower_bound(pole.begin(), pole.end(), make_pair(ppl[i], -1));
        
        if (it != pole.end()) {
            ma = max(ma, it->second - abs(ppl[i] - it->first));
        }
        
        if (it != pole.begin()) {
            it--;
            ma = max(ma, it->second - abs(ppl[i] - it->first));
        }
        
        cout << ma << endl;
    }
    
    return 0;
}
