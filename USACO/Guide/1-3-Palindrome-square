/*
ID: swayams4
PROG: palsquare
LANG: C++
*/

#include <bits/stdc++.h>>

using namespace std;

bool isPalindrome(string s) {
    for (unsigned int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}

string convertToBase(int decimalInteger, int base) {
    string digits = "0123456789ABCDEFGHIJ";
    string s = "";

    while (decimalInteger) {
        s += digits[decimalInteger % base];
        decimalInteger /= base;
    }

    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ifstream fin("palsquare.in");
    ofstream fout("palsquare.out");

    int B, N = 300;
    fin >> B;

    for (int i = 1; i <= N; i++) {
        string c = convertToBase(i, B);
        string s = convertToBase(i*i, B);

        if (isPalindrome(s))
            fout << c << " " << s << endl;
    }

    return 0;
}