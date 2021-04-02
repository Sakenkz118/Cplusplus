#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double netBalance, payment, d1, d2;
    double interest, monthlyInterest;

    cout << "Enter the balance shown in the bill: $";
    cin >> netBalance;
    cout << endl;

    cout << "Input the payment made: $";
    cin >> payment;
    cout << endl;

    cout << "Enter the number of days in the billing cycle: ";
    cin >> d1;
    cout << endl;

    cout << "Enter the number of days payment is made before billing cycle: ";
    cin >> d2;
    cout << endl;

    cout << "The the interest rate per month: ";
    cin >> monthlyInterest;
    cout << endl;

    interest = ((netBalance * d1 - payment * d2) / d1) * monthlyInterest;

    cout << fixed << showpoint << setprecision(2);

    cout << "The interest is equal to " << interest << "%";
    cout << endl;

    return 0;
}
