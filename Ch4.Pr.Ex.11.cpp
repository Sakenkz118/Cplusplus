#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int accountNumber;
    char accountType;
    double minimumBalance;
    double currentBalance;

    cout << "Enter a customer's account number: ";
    cin >> accountNumber;
    cout << endl;

    cout << "Account type: ";
    cin >> accountType;
    cout << endl;

    cout << "Minimum balance to be maintained: $";
    cin >> minimumBalance;
    cout << endl;

    cout << "Current balance: $";
    cin >> currentBalance;
    cout << endl;
    cout << endl;

    switch (accountType)
    {
    case 'S':
        if (currentBalance < minimumBalance)
        {
        currentBalance = currentBalance - 10.00;
        }
        else
            currentBalance = currentBalance * (1 + (4.0 / 1200));
            break;
    case 'C':
        if (currentBalance < minimumBalance)
        {
        currentBalance = currentBalance - 25.00;
        }
        else if (currentBalance > minimumBalance + 5000.00)
            currentBalance = currentBalance * (1 + (3.0 / 1200));
        else
            currentBalance = currentBalance * (1 + (5.0 / 1200));
        break;

    default:
        cout << "Incorrect data!" << endl;
    }

    cout << fixed << showpoint << setprecision(2);

    cout << "Account number: " << accountNumber << endl;
    cout << "Account type: " << accountType << endl;
    cout << "Balance: $" << currentBalance << endl;

    return 0;
}
