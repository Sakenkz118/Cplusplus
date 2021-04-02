#include <iostream>
#include <cmath>

using namespace std;

bool isPalindrome(string str);

int main ()
{
    string value;

    cout << "Please enter a string: ";
    cin >> value;
    cout << endl;

    if (isPalindrome(value) == true)
        cout << value << " is a palindrome number." << endl;
    else if (isPalindrome(value) == false)
        cout << value << " is NOT a palindrome number." << endl;

    return 0;
}

bool isPalindrome(string str)
{
    int length = str.length(); //Step 1
    for (int i = 0; i < length / 2; i++) //Step 2
        if (static_cast<char>(tolower(str[i])) != static_cast<char>(tolower(str[length - 1 - i])))
            return false;
    return true;
}
