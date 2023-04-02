#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class computer
{
            char chiptype[10];
            int speed;
            public:
                        void getdetails()
                        {
                                    gets(chiptype);
                                    cin>>speed;
                        }
                        void showdetails()
                        {
                                    cout << “Chip” << chiptype << “ Speed = “ << speed;
                        }
};

int main()
{
    computer output;
    ofstream fin;
    fin.open("SHIP.DAT", ios::binary);
    // write to the binary file
    fin.write((char *)&output, sizeof(output));

    fin.close();
    return 0;
            
}

void readfile(ifstream &fout)
{
    string content;
    fout.read((char *)&content, sizeof(content));
    content.showdetails();   
    
}