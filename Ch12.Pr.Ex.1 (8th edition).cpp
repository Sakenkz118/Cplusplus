#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    string input;
    char *lower;
    char *upper;
    int length;
    char lit;

    cout << "Enter a word size limit: ";
    cin >> length;
    cout << endl;

    lower = new char[length];

    cout << "Please enter a string: ";
    cin >> lower;
    cout << endl;

    length = strlen(lower);
    cout << "length = " << length << endl;

    cout << "After converting to uppercase letters: ";
    for (int i = 0; i < length; i++)
    {
        lit = toupper(lower[i]);
        cout << lit;
    }

    cout << endl;

    return 0;
}
