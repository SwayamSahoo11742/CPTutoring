/*
ID: swayams4
PROG: crypt1
LANG: C++
*/

#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int validSolution(vector<int> solution, vector<int> digits) {
    int N1 = solution[0] * 100 + solution[1] * 10 + solution[2];
    int N2 = solution[3] * 10 + solution[4];

    int PP1 = N1 * solution[4];
    int PP2 = N1 * solution[3];

    int P = N1 * N2;

    if (PP1 >= 1000 || PP2 >= 1000 || P >= 10000)
        return false;

    vector<int> digitsToCheck;
    digitsToCheck.push_back(PP1 % 10);
    digitsToCheck.push_back((PP1 % 100 - PP1 % 10) / 10);
    digitsToCheck.push_back(PP1 / 100);
    digitsToCheck.push_back(PP2 % 10);
    digitsToCheck.push_back((PP2 % 100 - PP2 % 10) / 10);
    digitsToCheck.push_back(PP2 / 100);
    digitsToCheck.push_back(P % 10);
    digitsToCheck.push_back((P % 100 - P % 10) / 10);
    digitsToCheck.push_back((P % 1000 - P % 100) / 100);
    digitsToCheck.push_back(P / 1000);

    for (unsigned int i = 0; i < digitsToCheck.size(); i++) {
        if (find(digits.begin(), digits.end(), digitsToCheck[i]) == digits.end())
            return false;
    }

    return true;
}

int getNumberOfSolutions(vector<int> digits,
                         vector<int> currentSolution = vector<int>()) {
    if (currentSolution.size() == 5) {
        if (validSolution(currentSolution, digits))
            return 1;
        else
            return 0;
    } else {
        int s = 0;
        for (unsigned int i = 0; i < digits.size(); i++) {
            vector<int> nextSolution = currentSolution;
            nextSolution.push_back(digits[i]);
            s += getNumberOfSolutions(digits, nextSolution);
        }
        return s;
    }
}

int main() {
    ifstream fin("crypt1.in");
    ofstream fout("crypt1.out");

    int N;
    vector<int> digits;
    fin >> N;
    for (int i = 0; i < N; i++) {
        int temp;
        fin >> temp;
        digits.push_back(temp);
    }

    fout << getNumberOfSolutions(digits) << endl;

    return 0;
}