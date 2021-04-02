#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    char word[21];
    char UPPER[21];
    int length;

    cout << "Please enter a string (max. length 20 to convert to UPPERCASE letters: ";
    cin >> word;
    cout << endl;

    length = strlen(word);

    for (int i = 0; i < length; i++)
    {
        UPPER[i] = toupper(word[i]);
    }

    cout << "After converting to uppercase letters: ";
    cout << UPPER;
    cout << endl;

    return 0;
}
