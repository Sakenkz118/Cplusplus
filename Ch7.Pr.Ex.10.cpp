#include <iostream>
#include <fstream>

using namespace std;

void initialize(int&, int&, int&);
void processBlank(ifstream&, ofstream&, char, int&);
void copyText(ifstream&, ofstream&, char);
void updateCount(int&, int&, int&);
void printTotal(int, int, int);

int main ()
{
    ifstream inFile;
    ofstream outFile;
    int countWords, countLines, countParagraphs;
    char ch;

    inFile.open("c:\\C++\\Ch7_Ex10Data.txt"); //open the input file
    outFile.open("c:\\C++\\Ch7_Ex10Output.txt"); //open the output file

    cout << "Processing data" << endl;

    initialize(countWords, countLines, countParagraphs);

    cout << countWords << " " << countLines << " " << countParagraphs << endl;

    while(!inFile.eof())
    {
        while(ch != '\n')
        {
           inFile.get(ch);
           processBlank(inFile, outFile, ch, countWords);
           copyText(inFile, outFile, ch);
        }

        cout << countWords + 1 << " " << countLines << " " << countParagraphs << endl;

        updateCount(countWords, countLines, countParagraphs);

        inFile.get(ch);
    }
    cout << countWords + 1 << " " << countLines << " " << countParagraphs << endl;

    inFile.close();
    outFile.close();

    return 0;
}

void initialize(int& words, int& lines, int& paragraphs)
{
    words = 0;
    lines = 0;
    paragraphs = 0;
}

void processBlank(ifstream& input, ofstream& output, char blank, int& wordCount)
{
    if (blank == ' ')
        {
            output << blank;
            wordCount++;
        }
}

void copyText(ifstream& in, ofstream& out, char nonblank)
{
    if (nonblank != ' ')
        {
            out << nonblank;
        }
        return;
}

void updateCount(int& words_no, int& lines_no, int& paragraphs_no)
{
    words_no = words_no + words_no;
    lines_no++;
    if(words_no == 0)
        paragraphs_no++;
}

void printTotal(int noOfWords, int noOfLines, int noOfParagraphs)
{

}
