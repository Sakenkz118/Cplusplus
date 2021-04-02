#include <iostream>

using namespace std;

int main ()
{
    int quarters, dimes, nickels, totalAmount;

    cout << "Please enter a number of quarters, dimes, and nickels as listed: ";
    cin >> quarters >> dimes >> nickels;
    cout << endl;

    totalAmount = quarters * 25 + dimes * 10 + nickels * 5;

    cout << "The value in cents is " << totalAmount << endl;

    return 0;
}
