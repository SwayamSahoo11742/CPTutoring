#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1+8;

bool graph1 [MAXN][MAXN];
bool graph2 [MAXN][MAXN];

// Bruteforce all the possible permutations of the given nodes
// For each permutation, check if two graphs match
void permutate(vector<int>& curr, vector<bool>& chosen, int& n, bool& ans){
    if (ans) return;
    if (curr.size() > n){
        bool valid = true;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                if (graph1[i][j] != graph2[curr[i]][curr[j]]){
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
        }
        if (valid) {
            ans = valid;
        }
    } else {
        for (int i = 1; i <= n; i++){
            if (chosen[i]) continue;
            chosen[i] = true;
            curr.push_back(i);
            permutate(curr, chosen, n, ans);
            chosen[i] = false;
            curr.pop_back();
        }
    }
}

int main() {
    int tests, a, b, n, m;
    cin >> tests;
    for (int t = 1; t <= tests; t++) {
        cin >> n >> m;
        for (int i = 1; i <= m; i++) {
            cin >> a >> b;
            graph1[a][b] = true;
            graph1[b][a] = true;
        }
        for (int i = 1; i <= m; i++) {
            cin >> a >> b;
            graph2[a][b] = true;
            graph2[b][a] = true;
        }

        vector<int> curr = {0};
        vector<bool> chosen(n + 1);
        bool ans = false;
        permutate(curr, chosen, n, ans);

        cout << ans;
    }
    return 0;
}