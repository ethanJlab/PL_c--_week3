#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("OUT.txt");
    string content = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
    fout << content << endl;
    return 0;
}