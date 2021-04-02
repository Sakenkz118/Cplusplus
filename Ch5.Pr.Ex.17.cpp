#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double loanAmount;     // amount in any currency
    double interestRate;    // annual percentage
    double monthlyPayment; // amount in any currency
    int noOfMonths = 0;

    cout << "Please enter the amount of money to borrow: ";
    cin >> loanAmount;
    cout << endl;

    cout << "Enter the annual rate in %: ";
    cin >> interestRate;
    cout << endl;

    cout << "Input monthly amount planned to pay back: ";
    cin >> monthlyPayment;
    cout << endl;

    if (((loanAmount * interestRate) / 1200) >= monthlyPayment)
    cout << "The monthly payment is too low and with this monthly payment the loan amount could not be repaid!" << endl;
    else
        {
    cout << fixed << showpoint << setprecision(2);

    while (loanAmount >= 0)
    {
        loanAmount = loanAmount - (monthlyPayment - loanAmount * (interestRate / 1200));
        noOfMonths++;
    }

    cout << "The number of months it would take to repay the loan is " << noOfMonths;
    cout << endl;
         }
    return 0;
}
