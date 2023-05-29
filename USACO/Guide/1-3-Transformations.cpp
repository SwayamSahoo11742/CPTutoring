/*
ID: swayams4
PROG: transform
LANG: C++
*/

#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> rotate90DegreesClockwise(vector<string> pattern) {
    vector<string> result = pattern;
    int N = pattern.size();

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            result[j][N-i-1] = pattern[i][j];

    return result;
}

vector<string> rotate180DegreesClockwise(vector<string> pattern) {
    return rotate90DegreesClockwise(rotate90DegreesClockwise(pattern));
}

vector<string> rotate270DegreesClockwise(vector<string> pattern) {
    return rotate180DegreesClockwise(rotate90DegreesClockwise(pattern));
}

vector<string> reflect(vector<string> pattern) {
    vector<string> result = pattern;
    int N = pattern.size();

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            result[i][j] = pattern[i][N-j-1];

    return result;
}

vector<string> combine90(vector<string> pattern) {
    return rotate90DegreesClockwise(reflect(pattern));
}

vector<string> combine180(vector<string> pattern) {
    return rotate180DegreesClockwise(reflect(pattern));
}

vector<string> combine270(vector<string> pattern) {
    return rotate270DegreesClockwise(reflect(pattern));
}

vector<string> noChange(vector<string> pattern) {
    return pattern;
}

bool equalPatterns(vector<string> p1, vector<string> p2) {
    string s1 = "", s2 = "";
    int N = p1.size();

    for (int i = 0; i < N; i++) {
        s1 += p1[i];
        s2 += p2[i];
    }

    return s1 == s2;
}

int getTransformationId(vector<string> before, vector<string> after) {
    if (equalPatterns(after, rotate90DegreesClockwise(before)))
        return 1;
    if (equalPatterns(after, rotate180DegreesClockwise(before)))
        return 2;
    if (equalPatterns(after, rotate270DegreesClockwise(before)))
        return 3;
    if (equalPatterns(after, reflect(before)))
        return 4;
    if (equalPatterns(after, combine90(before)))
        return 5;
    if (equalPatterns(after, combine180(before)))
        return 5;
    if (equalPatterns(after, combine270(before)))
        return 5;
    if (equalPatterns(after, noChange(before)))
        return 6;
    return 7;
}

int main() {
    ifstream fin("transform.in");
    ofstream fout("transform.out");

    int N;
    vector<string> before;
    vector<string> after;

    fin >> N;
    for (int i = 0; i < N; i++) {
        string line;
        fin >> line;
        before.push_back(line);
    }
    for (int i = 0; i < N; i++) {
        string line;
        fin >> line;
        after.push_back(line);
    }

    fout << getTransformationId(before, after) << endl;

    return 0;
}