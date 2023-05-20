/*
ID: swayams4
LANG: C++
TASK: friday
*/

#include <bits/stdc++.h>
using namespace std;

int n, cnt[7], cur;
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int ly(int n){
    if(n % 100 == 0){
        return (n % 400 == 0);
    }else{
        return (n % 4 == 0);
    }
}
int main(){
    ifstream fin("friday.in");
    ofstream fout("friday.out");

    fin >> n;
    fill(cnt, cnt+7, 0);
    cur=0;
    for(int y = 1900; y <= 1900+n-1; y++){
        for(int m = 0; m < 12; m++){
            cnt[(cur + 12) % 7]++;
            if(m==1){
                if(ly(y)){
                    cur = (cur+month[m]+1) % 7;
                } else cur = (cur+month[m]) % 7;
            }else cur = (cur+month[m]) % 7;
        
        }
    }

    for(int i = 5; i <7; i++){
        fout << cnt[i]<<" ";
    }for(int i = 0; i < 5; i++){
        fout << cnt[i]<< (i == 4? "":" ");
    }
    fout << "\n";
}