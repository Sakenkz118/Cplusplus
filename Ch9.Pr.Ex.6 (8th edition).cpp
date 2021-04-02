#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct letters
{
    int lowercase = 0;
    int uppercase = 0;
};

void openfile(ifstream& inFile, ofstream& outFile);
void count(letters characters[], istream& inFile);
void printResult(letters characters[], ofstream& outFile);

int main()
{
    ifstream infile;
    ofstream outfile;
    letters Characters[26];

    openfile(infile, outfile);
    count(Characters, infile);
    printResult(Characters, outfile);

    infile.close();
    outfile.close();

    return 0;
}

void openfile(ifstream& inFile, ofstream& outFile)
{
    string inputFile; //variable to hold the input file name
    string outputFile; //variable to hold the output file name

    cout << "Enter the file name: ";
    cin >> inputFile;
    cout << endl;

    inFile.open(inputFile.c_str());

    if(!inFile)
    {
        cout << "Cannot open the input file." << endl;
    }

    cout << "Enter the output file name: ";
    cin >> outputFile;
    cout << endl;

    outFile.open(outputFile.c_str());
}

void count(letters characters[], istream& inFile)
{
    char ch;

    while(!inFile.eof())
    {
        inFile >> ch;
        if(static_cast<int>(ch) >= 65 && static_cast<int>(ch) <= 90)
        {
            characters[static_cast<int>(ch) - static_cast<int>('A')].uppercase++;
        }
        else if(static_cast<int>(ch) >= 97 && static_cast<int>(ch) <= 122)
        {
            characters[static_cast<int>(ch) - static_cast<int>('a')].lowercase++;
        }
    }
}

void printResult(letters characters[], ofstream& outFile)
{
    int lowerSum = 0;
    int upperSum = 0;

    for(int i = 0; i < 26; i++)
    {
        lowerSum = lowerSum + characters[i].lowercase;
        upperSum = upperSum + characters[i].uppercase;
    }

    cout << fixed << setprecision(0);
    outFile << fixed << setprecision(0);
    cout << "Total number of lowercase letters from a-z: " << lowerSum << endl;
    cout << "Stat data for each lowercase letter: " << endl;

    outFile << "Total number of lowercase letters from a-z: " << lowerSum << endl;
    outFile << "Stat data for each lowercase letter: " << endl;

    for(int i = 0; i < 26; i++)
    {
        cout << "Lowercase letter '" << static_cast<char>(static_cast<int>('a') + i) << "':" << characters[i].lowercase;
        cout << " " << (static_cast<double>(characters[i].lowercase) / static_cast<double>(lowerSum)) * 100 << "%" << endl;

        outFile << "Lowercase letter '" << static_cast<char>(static_cast<int>('a') + i) << "':" << characters[i].lowercase;
        outFile << " " << (static_cast<double>(characters[i].lowercase) / static_cast<double>(lowerSum)) * 100 << "%" << endl;
    }
    cout << endl;

    cout << "Total number of uppercase letters from A-Z: " << upperSum << endl;
    cout << "Stat data for each uppercase letter: " << endl;

    outFile << "Total number of uppercase letters from A-Z: " << upperSum << endl;
    outFile << "Stat data for each uppercase letter: " << endl;

    for(int i = 0; i < 26; i++)
    {
        cout << "Uppercase letter '" << static_cast<char>(static_cast<int>('A') + i) << "':" << characters[i].uppercase;
        cout << " " << (static_cast<double>(characters[i].uppercase) / static_cast<double>(upperSum)) * 100 << "%" << endl;

        outFile << "Uppercase letter '" << static_cast<char>(static_cast<int>('A') + i) << "':" << characters[i].uppercase;
        outFile << " " << (static_cast<double>(characters[i].uppercase) / static_cast<double>(upperSum)) * 100 << "%" << endl;
    }
}
