/*
ID: swayams4
PROG: namenum
LANG: C++
*/

#include <fstream>
#include <map>
#include <vector>

using namespace std;

map<char, char> buildLetterMappings() {
    map<char, char> m;
    m['A'] = m['B'] = m['C'] = '2';
    m['D'] = m['E'] = m['F'] = '3';
    m['G'] = m['H'] = m['I'] = '4';
    m['J'] = m['K'] = m['L'] = '5';
    m['M'] = m['N'] = m['O'] = '6';
    m['P'] = m['R'] = m['S'] = '7';
    m['T'] = m['U'] = m['V'] = '8';
    m['W'] = m['X'] = m['Y'] = '9';

    return m;
}

string translateToMappings(string name, map<char, char> letterMappings) {
    string res = "";

    for (unsigned int i = 0; i < name.size(); i++)
        res += letterMappings[name[i]];

    return res;
}

map<string, vector<string> > buildNameMappings(string dictFileName,
                                               map<char, char> letterMappings) {
    map<string, vector<string> > mappings;

    ifstream fin(dictFileName.c_str());
    string name;
    while (fin >> name) {
        string mapped = translateToMappings(name, letterMappings);
        mappings[mapped].push_back(name);
    }

    return mappings;
}

int main() {
    ifstream fin("namenum.in");
    ofstream fout("namenum.out");

    map<char, char> letterMappings = buildLetterMappings();
    map<string, vector<string> > nameMappings =
        buildNameMappings("dict.txt", letterMappings);

    string inputNumber;
    fin >> inputNumber;

    if (nameMappings[inputNumber].size() == 0)
        fout << "NONE" << endl;
    else {
        for (unsigned int i = 0; i < nameMappings[inputNumber].size(); i++) {
            fout << nameMappings[inputNumber][i] << endl;
        }
    }

    return 0;
}