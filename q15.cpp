#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class STUD
{
            int Rno;
            char Name[20];
            public:
            void Enter()
            {cin >> Rno; gets(Name); }
            void Display()
            {cout << Rno << Name << endl;}
};

int main()
{
    addStudent();
    return 0;
}

addStudent()
{
    STUD test;
    test.Enter();
    ofstream fin;
    fin.open("STUD.DAT", ios::binary);
    // write to the binary file
    fin.write((char *)&test, sizeof(test));
    fin.close();
}