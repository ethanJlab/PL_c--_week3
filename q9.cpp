#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

void vowelwords(ifstream &fin, ofstream &fout);
bool isVowel(char c);
std::vector<std::string> extractVowelWords(std::string input);


int main()
{
    // question 8
    ifstream fin;
    fin.open("FIRST.txt");
    ofstream fout;
    fout.open("SECOND.txt");
    vowelwords(fin, fout);
    fin.close();
    fout.close();
    return 0;
    
}

// outputs words that start with a vowel to a file
void vowelwords(ifstream &fin, ofstream &fout)
{
    // put intput file into a string
    string content;
    string output;
    char ch;
    while (fin.get(ch))
    {
        content += ch;
    }
    extractVowelWords(content);
    for (int i = 0; i < extractVowelWords(content).size(); i++) {
        output += extractVowelWords(content)[i] + " ";
    }
    
    // output to output file
    fout << output << endl;
}

std::vector<std::string> extractVowelWords(std::string input) {
    std::vector<std::string> result;
    std::istringstream iss(input);
    std::string word;
    while (iss >> word) {
        if (isVowel(word[0])) {
            result.push_back(word);
        }
    }
    return result;
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
