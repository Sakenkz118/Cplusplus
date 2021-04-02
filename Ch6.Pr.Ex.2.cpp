#include <iostream>

using namespace std;

bool isVowel(char ch);

int main ()
{
    char letter;

    cout << "Please enter a letter: ";
    cin >> letter;
    cout << endl;

    if (isVowel(letter) == 1)
        cout << "It is a vowel! " << endl;
    else if (isVowel(letter) == 0)
        cout << "It is a consonant! " << endl;

    return 0;
}

bool isVowel(char ch)
{
    switch(ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        return true;
    default:
        return false;
    }
}
