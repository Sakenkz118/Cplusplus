#include <iostream>
#include <string>

using namespace std;

void lowercaseVowels(string word);

int main ()
{
    string str;

    cout << "Please enter a word: ";
    cin >> str;
    cout << endl;

    lowercaseVowels(str);

    return 0;
}

void lowercaseVowels(string word)
{
    int countA = 0;
    int countE = 0;
    int countI = 0;
    int countO = 0;
    int countU = 0;

    for (int i = 0; i < word.length(); i++)
    {
        switch(word.at(i))
        {
        case 'a':
            countA++;
            break;
        case 'e':
            countE++;
            break;
        case 'i':
            countI++;
            break;
        case 'o':
            countO++;
            break;
        case 'u':
            countU++;
            break;
        }
    }
    cout << "There are " << endl;
    cout << "a: " << countA << endl;
    cout << "e: " << countE << endl;
    cout << "i: " << countI << endl;
    cout << "o: " << countO << endl;
    cout << "u: " << countU << endl;
    cout << "Total: " << countA + countE + countI + countO + countU << endl;

}
