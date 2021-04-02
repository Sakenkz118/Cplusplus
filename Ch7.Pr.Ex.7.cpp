#include <iostream>
#include <string>

using namespace std;

void input(string& str);
void lowercaseVowels(string word, int& a, int& e, int& i, int& o, int& u);
string str;

int main ()
{
    int countA, countE, countI, countO, countU;
    input(str);
    lowercaseVowels(str, countA, countE, countI, countO, countU);

    cout << "There are " << endl;
    cout << "a: " << countA << endl;
    cout << "e: " << countE << endl;
    cout << "i: " << countI << endl;
    cout << "o: " << countO << endl;
    cout << "u: " << countU << endl;

    return 0;
}


void input(string& str)
{
    cout << "Please enter a word: ";
    cin >> str;
    cout << endl;
}

void lowercaseVowels(string word, int& aCount, int& eCount, int& iCount, int& oCount, int& uCount)
{
    aCount = 0;
    eCount = 0;
    iCount = 0;
    oCount = 0;
    uCount = 0;

    for (int i = 0; i < word.length(); i++)
    {
        switch(word.at(i))
        {
        case 'a':
            aCount++;
            break;
        case 'e':
            eCount++;
            break;
        case 'i':
            iCount++;
            break;
        case 'o':
            oCount++;
            break;
        case 'u':
            uCount++;
            break;
        }
    }


}
