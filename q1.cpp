#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("NOTES.txt");
    for (int i = 1; i <= 100; i++)
    {
        fout << i << endl;
    }
    fout.close();
    return 0;
}