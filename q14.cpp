#include <fstream.h>
class Employee
{
            int Eno;
            char Ename[20];
            public:
            //Function to count the total number of records
            int Countrec();
};

int Item::Countrec()
{
            fstream File;
            File.open("EMP.DAT", ios::binary | ios::in);
            File.seekg(0, ios::beg); //Statement 1
            int Bytes =File.tellg();  //Statement 2
            int Count = Bytes / sizeof(Item);
            File.close();
            return Count;
}