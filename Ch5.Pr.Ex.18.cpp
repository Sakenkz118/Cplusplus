#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double loanAmount;     // amount in any currency
    double interestRate;    // annual percentage
    double interestPaid = 0;
    double totalInterest = 0;
    double monthlyPayment; // amount in any currency
    int noOfMonths = 0;
    double minimumMonthlyPayment = 0;

    cout << "Please enter the amount of money to borrow: ";
    cin >> loanAmount;
    cout << endl;

    cout << "Enter the annual rate in %: ";
    cin >> interestRate;
    cout << endl;

    minimumMonthlyPayment = (loanAmount * interestRate) / 1200;

    cout << "Minimum monthly payment is " << minimumMonthlyPayment << endl;
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
                    if (loanAmount > 0)
                    {
                    interestPaid = loanAmount * (interestRate / 1200);
                    totalInterest = totalInterest + interestPaid;
                    }
                    loanAmount = loanAmount - (monthlyPayment - loanAmount * (interestRate / 1200));
                    if ((loanAmount * (1 + (interestRate / 1200)) < monthlyPayment) && (loanAmount > 0))
                        {
                        cout << "The loan amount before the last payment: " << loanAmount << endl;
                        cout << "The actual amount of the last payment: " << monthlyPayment - loanAmount * (1 + (interestRate / 1200)) << endl;
                        }
                    noOfMonths++;
                }

            cout << "The number of months it would take to repay the loan is " << noOfMonths << endl;
            cout << "The total interest paid: " << totalInterest << endl;
            cout << endl;
        }

    return 0;
}
