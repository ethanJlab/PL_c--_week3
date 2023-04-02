#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class EMPLOYEE
{
            int ENO;
            char ENAME[10];
            public :
            void GETIT()
            {
                        cin >> ENO;
                        gets (ENAME);
            }
            void SHOWIT()
           {
                        cout <<ENO << ENAME <<endl;
            }
};

int main()
{
            EMPLOYEE test;
            EMPLOYEE output;
            test.GETIT();

            ofstream fin;
            fin.open("EMP.DAT", ios::binary);
            // write to the binary file
            fin.write((char *)&test, sizeof(test));
            
            fin.close();
            ifstream fout;
            fout.open("EMP.DAT", ios::binary);
            // read from the binary file
            fout.read((char *)&output, sizeof(output));
            output.SHOWIT();
            return 0;
}