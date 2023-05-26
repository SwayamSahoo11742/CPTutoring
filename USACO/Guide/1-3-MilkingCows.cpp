/*
ID: swyaams4
PROG: milk2
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;
int N;
typedef struct milk milking;
struct milk
{
    int start;
    int end;
};
bool compare(milking a, milking b)
{
    return a.start < b.start;
}
int main() {
    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
    fin >> N;
    milking values[N];
    for(int i = 0; i < N; ++i)
    {
        int start, end;
        fin >> start >> end;
        milking a = milking{start, end};
        values[i] = a;
    }
    sort(values, &values[N], &compare);
    vector<milking> merged;
    for(int i = 0; i < N-1; ++i)
    {
        if(values[i].end >= values[i+1].start)
        {
            values[i+1].start = values[i].start;
            values[i+1].end = max(values[i].end, values[i+1].end);
        }
        else
        {
            merged.push_back(values[i]);
        }
    }
    merged.push_back(values[N-1]);//we have to manually push the last interval
    int maxBreak = 0;
    for(int i = 0; i < merged.size()-1; ++i)
    {
        int vbreak = merged[i+1].start - merged[i].end;
        if(vbreak > maxBreak) maxBreak = vbreak;
    }
    int maxLength = 0;
    for(int i = 0; i < merged.size(); ++i)
    {
        int current = merged[i].end-merged[i].start;
        if(current > maxLength) maxLength = current;
    }
    fout << maxLength << " " << maxBreak << "\n";
    return 0;
}