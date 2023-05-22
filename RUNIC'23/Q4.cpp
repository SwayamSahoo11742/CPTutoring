#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;

        int count = 0;
        int curr = l;
        int next = l + 1;

        while (next <= r) {
            if (heights[next] > heights[curr]) {
                count++;
                curr = next;
            }
            next++;
        }

        cout << count << endl;
    }

    return 0;
}
