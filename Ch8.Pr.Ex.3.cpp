#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool isVowel(char ch);

bool isPunctuation(char letter);

string rotate(string pStr);

string pigLatinString(string pStr);

int main()
{
    string str;
    ifstream inFile;
    ofstream outFile;
    int counter1 = 0;

    inFile.open("c:\\C++\\Ch8_Ex3Data.txt");
    outFile.open("c:\\C++\\Ch8_Ex3Out.txt");

    while(!inFile.eof())
    {
        inFile >> str;

        cout << pigLatinString(str) << " ";
        if (counter1 == 7)
        {
            cout << endl;
            counter1 = 0;
        }
        outFile << pigLatinString(str) << " ";
        counter1++;
    }

    cout << endl;

    inFile.close();
    outFile.close();

    return 0;
}
bool isVowel(char ch)
{
    switch (ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            return true;
        default:
            return false;
    }
}

string rotate(string pStr)
{
    string::size_type len = pStr.length();
    string rStr;

    rStr = pStr.substr(1, len - 1) + pStr[0];
    return rStr;
}
string pigLatinString(string pStr)
{
    string::size_type len;
    string::size_type length;
    bool foundVowel;
    bool foundPunctuation;
    string::size_type counter;
    char append;

    length = pStr.length();
    foundPunctuation = isPunctuation (pStr [pStr.length() - 1]);

    if (isVowel(pStr[0])) //Step 1
    {
        if (foundPunctuation == false)
            pStr = pStr + "-way";
        else if (foundPunctuation == true)
        {
            append = pStr [pStr.length() - 1];
            pStr = pStr.substr(0, pStr.length() - 1);
            pStr = pStr + "-way" + append;
        }
    }
    else //Step 2
        {
            if (foundPunctuation == false)
                {
            pStr = pStr + '-';
            pStr = rotate(pStr); //Step 3
            len = pStr.length(); //Step 3.a
            foundVowel = false; //Step 3.b

            for (counter = 1; counter < len - 1; counter++) //Step 3.d
                if (isVowel(pStr [0]))
                {
                    foundVowel = true;
                    break;
                }
                else //Step 3.c
                    pStr = rotate(pStr);
                if (!foundVowel) //Step 4
                    pStr = pStr.substr(1, len) + "-way";
                else
                    pStr = pStr + "ay";
                    }

            else if(foundPunctuation == true)
            {
                append = pStr [pStr.length() - 1];
                pStr = pStr.substr(0, pStr.length() - 1);
                pStr = pStr + '-';
                pStr = rotate(pStr); //Step 3
                len = pStr.length(); //Step 3.a
                foundVowel = false; //Step 3.b

            for (counter = 1; counter < len - 1; counter++) //Step 3.d
                if (isVowel(pStr [0]))
                {
                    foundVowel = true;
                    break;
                }
                else //Step 3.c
                    pStr = rotate(pStr);
                if (!foundVowel) //Step 4
                    pStr = pStr.substr(1, len) + "-way" + append;
                else
                    pStr = pStr + "ay" + append;
            }
        }

    return pStr; //Step 5
}

bool isPunctuation(char letter)
{
    switch (letter)
    {
        case '.':
        case ',':
        case '?':
        case '!':
        case ':':
        case ';':
            return true;
        default:
            return false;
    }
}
