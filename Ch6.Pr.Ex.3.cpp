#include <iostream>

using namespace std;

bool isVowel(char ch);

int main ()
{
    char letter;
    int countVowel = 0;
    int counter = 0;

    cout << "Please enter a sequence of characters (less than 10): ";
    cin >> letter;
    while (counter < 10)
    {
            if (isVowel(letter) == 1)
                countVowel++;
            counter++;
            cin >> letter;
    }
    cout << "The number of vowels is " << countVowel << endl;

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
