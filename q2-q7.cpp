#include <iostream>
#include <fstream>
using namespace std;

void countLetters(ifstream &fin);
void countSpaces(ifstream &fin);
void countWords(ifstream &fin);
void theCount(ifstream &fin);
void countLines(ifstream &fin);

int main()
{
    // question 2
    ofstream fout;
    fout.open("OUT.txt");
    string content = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
    fout << content << endl;

    //question 3
    ifstream fin;
    fin.open("OUT.txt");
    countLetters(fin);
    fin.close();

    //question 4
    fin.open("OUT.txt");
    countSpaces(fin);
    fin.close();

    //question 5
    fin.open("OUT.txt");
    countWords(fin);
    fin.close();

    //question 6
    fin.open("STORY.txt");
    theCount(fin);
    fin.close();

    //question 7
    fin.open("STORY.txt");
    countLines(fin);
    fin.close();

    return 0;
}

void countLetters(ifstream &fin)
{
    int count = 0;
    char ch;
    while (fin.get(ch))
    {
        if (isalpha(ch))
        {
            count++;
        }
    }
    cout << "The number of letters in the file is: " << count << endl;
}

void countSpaces(ifstream &fin)
{
    int count = 0;
    char ch;
    while (fin.get(ch))
    {
        if (ch == ' ')
        {
            count++;
        }
    }
    cout << "The number of spaces in the file is: " << count << endl;
}

void countWords(ifstream &fin)
{
    int flag = 0;
    int count = 0;
    char ch;
    while (fin.get(ch))
    {
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            flag = 0;
        } else if (flag == 0)
        {
            flag = 1;
            count++;
        }
    }
    cout << "The number of words in the file is: " << count << endl;
}

// counts the number of times the word "the" appears in the file as an indemependent word
void theCount(ifstream &fin)
{
    int flag = 0;
    int count = 0;
    char ch;
    while (fin.get(ch))
    {
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            flag = 0;
        } else if (flag == 0)
        {
            flag = 1;
            if (ch == 'T' || ch == 't')
            {
                fin.get(ch);
                if (ch == 'H' || ch == 'h')
                {
                    fin.get(ch);
                    if (ch == 'E' || ch == 'e')
                    {
                        fin.get(ch);
                        if (!isalpha(ch))
                        {
                            count++;
                        }
                    }
                }
            }
            
        }
    }
    cout << "The number of times the word \"The\" appears is: " << count << endl;
}

//count and display the number of lines not starting with alphabet 'A' present in a text file "STORY.TXT".
void countLines(ifstream &fin)
{
    int count = 0;
    char ch;
    // check if first line starts with a
    fin.get(ch);
    if (ch != 'A' && ch != 'a')
    {
        count++;
    }
    while (fin.get(ch))
    {
        if (ch == '\n')
        {
            fin.get(ch);
            if (ch != 'A' && ch != 'a')
            {
                count++;
            }
        }
    }
    cout << "The number of lines not starting with alphabet 'A' is: " << count << endl;
} 