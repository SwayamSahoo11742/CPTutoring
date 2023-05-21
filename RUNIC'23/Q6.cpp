#include <iostream>
#include <vector>

using namespace std;

long long merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left;
    int j = mid;
    int k = left;
    long long inversions = 0;

    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inversions += (mid - i);
        }
    }

    while (i <= mid - 1) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inversions;
}

long long mergeSort(vector<int>& arr, vector<int>& temp, int left, int right) {
    long long inversions = 0;
    if (right > left) {
        int mid = left + (right - left) / 2;

        inversions += mergeSort(arr, temp, left, mid);
        inversions += mergeSort(arr, temp, mid + 1, right);

        inversions += merge(arr, temp, left, mid + 1, right);
    }
    return inversions;
}

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    vector<int> temp(N);
    long long swaps = mergeSort(heights, temp, 0, N - 1);

    cout << swaps << endl;

    return 0;
}
