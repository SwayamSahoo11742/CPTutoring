#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int calculateDepth(int node, const unordered_map<int, vector<int>>& adjList) {
    int maxDepth = 0;
    if (adjList.find(node) == adjList.end()) {
        return 1;
    } else {
        for (int child : adjList.at(node)) {
            int depth = calculateDepth(child, adjList);
            maxDepth = max(maxDepth, depth);
        }
        return maxDepth + 1;
    }
}

int main() {
    int n;
    cin >> n;

    unordered_map<int, vector<int>> adjList;
    for (int i = 2; i <= n; i++) {
        int parent;
        cin >> parent;
        adjList[parent].push_back(i);
    }

    int maxTreeDepth = 0;
    for (int i = 1; i <= n; i++) {
        int depth = calculateDepth(i, adjList);
        maxTreeDepth = max(maxTreeDepth, depth);
    }

    if (maxTreeDepth == 0) {
        cout << -1 << endl;
    } else {
        cout << maxTreeDepth - 1 << endl;
    }

    return 0;
}
