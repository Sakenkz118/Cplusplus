#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch);

string removeVowels(string word);

int main ()
{
    string str;

    cout << "Please enter a string: ";
    cin >> str;
    cout << endl;

    cout << "Without vowels a string is " << removeVowels(str) << endl;

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
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

string removeVowels(string word)
{
    string::size_type len = word.length();
    string newStr = "";

    for (int i = 0; i < len; i++)
    {
        if (isVowel(word[i]) == false)
        {
            newStr = newStr + word.substr(i, 1);
        }
    }

    return newStr;

}
