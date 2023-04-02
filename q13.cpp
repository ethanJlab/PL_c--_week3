#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
            char S_Admno[lO];    //Admission number of student
            char S_Name[30];       //Name of student
            int Percentage;            //Marks Percentage of student
            public:
                        void EnterData()
                        {
                                    gets(S_Admno);
                                    gets(S_Name);
                                    cin>>Percentage;
                        }
                        void DisplayData()
                        {
                                    cout << setw(12) << S_Admno;
                                    cout << setw(32) << S_Name;
                                   cout<<setw(3) << Percentage << endl;
                        }
                        int ReturnPercentage()
                        {return Percentage;}
};

int main()
{
    ofstream fout;
    string output;
    fout.open("STUDENT.DAT", ios::binary);
    Student S;
    char ch;

    // get each student 
    fout.read((char*)&output, sizeof(output));
    for (int i = 0; i < output.length(); i++)
    {
        if(output[i].ReturnPercentage() > 75)
        {
            output[i].DisplayData();
        }
    }
    fout.close();
    return 0;

}