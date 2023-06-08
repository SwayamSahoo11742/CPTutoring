/*
ID: swayams4
PROG: milk
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int getMinimumPrice(vector<pair<int, int> > prices, int milkQuantity) {
    sort(prices.begin(), prices.end());
    int currentAmount = 0;
    int currentPrice = 0;

    for (unsigned int i = 0;
         i < prices.size() && currentAmount < milkQuantity;
         i++) {
        int addingQuantity = min(milkQuantity - currentAmount,
                                 prices[i].second);
        currentPrice += addingQuantity * prices[i].first;
        currentAmount += addingQuantity;
    }

    return currentPrice;
}

int main() {
    ifstream fin("milk.in");
    ofstream fout("milk.out");

    int N, M;
    vector<pair<int, int> > prices;
    fin >> N >> M;
    for (int i = 0; i < M; i++) {
        pair<int, int> farmerPrice;
        fin >> farmerPrice.first >> farmerPrice.second;
        prices.push_back(farmerPrice);
    }

    fout << getMinimumPrice(prices, N) << endl;

    return 0;
}