#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

unordered_map<int, vector<int>> s1;
unordered_map<int, vector<int>> s2;
vector<int> f1;
vector<int> f2;

bool checkBranch(int a, int b) {
    f1.push_back(a);
    f2.push_back(b);

    if (s1[a].size() != s2[b].size()) {
        return false;
    } else {
        for (int i = 0; i < s1[a].size(); i++) {
            if (!count(f1.begin(), f1.end(), s1[a][i])) {
                int found = 0;
                for (int j = 0; j < s2[b].size(); j++) {
                    if (!count(f2.begin(), f2.end(), s2[b][j])) {
                        if (s1[s1[a][i]].size() == s2[s2[b][j]].size()) {
                            if (checkBranch(s1[a][i], s2[b][j])) {
                                found = 1;
                                break;
                            }
                        }
                    }
                }

                if (found == 0) {
                    return false;
                }
            }
        }
    }

    return true;
}

bool checkStructure() {
    for (auto it = s1.begin(); it != s1.end(); ++it) {
        if (it->second.size() == s2[it->first].size()) {
            f1.clear(); // Clear the visited nodes for each branch
            f2.clear(); // Clear the visited nodes for each branch

            if (checkBranch(it->first, it->first)) { // Pass the same node for both trees
                return true;
            }
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        s1.clear();
        s2.clear();

        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            s1[a].push_back(b);
            s1[b].push_back(a);
        }

        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            s2[a].push_back(b);
            s2[b].push_back(a);
        }

        bool hasSameStructure = checkStructure();

        if (hasSameStructure) {
            cout << "1";
        } else {
            cout << "0";
        }
    }
    cout << endl;

    return 0;
}
