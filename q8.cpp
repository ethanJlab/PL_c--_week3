#include <iostream>
#include <fstream>
using namespace std;

void copyupper(ifstream &fin, ofstream &fout);

int main()
{
    // question 8
    ifstream fin;
    fin.open("FIRST.txt");
    ofstream fout;
    fout.open("SECOND.txt");
    copyupper(fin, fout);
    fin.close();
    fout.close();
    return 0;
    
}

void copyupper(ifstream &fin, ofstream &fout)
{
    // put intput file into a string
    string content;
    char ch;
    while (fin.get(ch))
    {
        content += ch;
    }
    // convert string to uppercase
    for (int i = 0; i < content.length(); i++)
    {
        content[i] = toupper(content[i]);
    }
    // output to output file
    fout << content << endl;
}