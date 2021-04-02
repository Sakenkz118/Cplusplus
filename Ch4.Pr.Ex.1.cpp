#include <iostream>

using namespace std;

int main ()
{
    double num;

    cout << "Please enter a number: ";
    cin >> num;
    cout << endl;

    if (num < 0)
        cout << "The number entered is negative." << endl;
    else if (num > 0)
        cout << "The number entered is positive." << endl;
    else
        cout << "The number entered is zero." << endl;

    return 0;
}
