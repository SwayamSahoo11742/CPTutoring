#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("gift1.in");
    int n; fin >> n;

    map<string, int> mp;
    vector<string> names;
    for(int i = 0; i < n; i++){
        string name; fin >> name;
        names.push_back(name);
        mp[name] = 0;
    }

    for(int i = 0; i < n; i++){
        string giver; fin >> giver;
        int money, p; fin >> money >> p;
        if(money != 0 && p != 0){
            int amount = money / p;
            for(int j = 0; j < p; j++){
                string rec; fin >> rec;
                mp[rec] += amount;
            }
            mp[giver] -= amount * p;
        }

    }
    fin.close();
    ofstream fout("gift1.out");
    for(auto nm : names){
        fout << nm << " " << mp[nm] << endl;
    }
    fout.close();
}