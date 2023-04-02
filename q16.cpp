class Item
{
            int Ino;
            char Item[20];
            public:
            //Function to search and display the content from a particular record number
            void Search(int );
           //Function to modify the content of a particular record number
            void Modify(int);
 };

 void Item::Search(int RecNo)
{
            fstream File;
            File.open( “STOCK.DAT”, ios::binary | ios::in);
            File.seekg(RecNo, ios::beg); //Statement 1
            File.read((char*)this, sizeof(Item));
            cout << Ino << ”==> ” << Item << endl;
            File.close();
}

void Item::Modify(int RecNo)
{
            fstream File;
            File.open( “STOCK.DAT”, ios::binary | ios::in | ios::out);
            cin>>Ino;
            cin.getline(Item, 20);
            File.seekp(RecNo, ios::beg)//Statement 2
            File.write( (char*)this, sizeof(Item));
            File.close();
}