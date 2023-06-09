/*
ID: swayams4
PROG: barn1
LANG: C++
*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("barn1.in"); ofstream fout("barn1.out");
    long long M, S, C;
    fin >> M >> S >> C;
    vector<int> a(C);
    for(int i = 0; i < C; i++){
        fin >> a[i];
    }
    sort(a.begin(), a.end());
    long long ans = S;
    ans-=a[0]-1;
    ans -= S-a.back();
    for(int i = 0; i < C-1; i++){
        a[i] = a[i+1]-a[i]-1;
    }
    a.pop_back();
    sort(a.begin(), a.end(), greater<>());
    for(int i = 0; i <min(M-1,C-1);i++){
        ans -= a[i];
    }
    fout << ans << endl;
}