#include <iostream>

using namespace std;

int main ()
{
    int fourDigitNumber;

    cout << "Please enter a four-digit positive integer: ";
    cin >> fourDigitNumber;
    cout << endl;

    cout << fourDigitNumber / 1000 << endl;
    fourDigitNumber = fourDigitNumber % 1000;

    cout << fourDigitNumber / 100 << endl;
    fourDigitNumber = fourDigitNumber % 100;

    cout << fourDigitNumber / 10 << endl;
    fourDigitNumber = fourDigitNumber % 10;

    cout << fourDigitNumber % 10 << endl;

    return 0;
}
