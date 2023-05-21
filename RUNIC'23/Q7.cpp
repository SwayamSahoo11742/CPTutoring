#include <iostream>
#include <vector>
using namespace std;

int countPermutations(int pos, vector<int>& nums, int l) {
    if (pos == l) {
        return 1;
    }

    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= pos + 1) {
            int num = nums[i];
            nums.erase(nums.begin() + i);
            count += countPermutations(pos + 1, nums, l);
            nums.insert(nums.begin() + i, num);
        }
    }

    return count;
}

int main() {
    int n; std::cin >> n;
    vector<int> a(n);
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }
    int result = countPermutations(0, a, n);
    std::cout << result << std::endl;

    return 0;
}
