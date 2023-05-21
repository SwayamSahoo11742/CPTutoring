#include <bits/stdc++.h>
using namespace std;

bool countOnesInSubSquares(std::vector<std::vector<int>>& binaryVector, int k) {
    int m = binaryVector.size();
    int n = binaryVector[0].size();

    bool result = false;

    for (int i = 0; i <= m - k; i++) {
        for (int j = 0; j <= n - k; j++) {
            int count = 0;
            for (int x = i; x < i + k; x++) {
                for (int y = j; y < j + k; y++) {
                    if (binaryVector[x][y] == 1) {
                        count++;
                    }
                }
            }
            if(count % 2 == 1){
                result = true;
                break;
            }
        }
    }

    return result;
}

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>> pond;
    for(int i = 0; i < n; i++){
        vector<int> b;
        for(int j = 0; j < m; j++){
            int temp; cin >> temp;
            b.push_back(temp);
        }
        pond.push_back(b);
    }

    bool counts = countOnesInSubSquares(pond, k);
    cout << (counts == 1? "true":"false") << endl;

    return 0;
}
