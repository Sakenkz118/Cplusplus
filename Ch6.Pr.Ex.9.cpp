#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double periodicPayment(double, double, int, int);
double unpaidBalance (double, double, int, int, int);

int main ()
{
    double L, r, k;
    int m, t;

    cout << "Please enter the loan amount: ";
    cin >> L;
    cout << endl;

    cout << "Enter the annual interest rate: ";
    cin >> r;
    cout << endl;

    cout << "The number of payments in a year: ";
    cin >> m;
    cout << endl;

    cout << "Years to repay loan: ";
    cin >> t;
    cout << endl;

    cout << "How many payments already done: ";
    cin >> k;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    cout << "Periodic payment: " << periodicPayment(L, r, m, t) << endl;
    cout << "The unpaid balance after " << k << " payments: " << unpaidBalance(L, r, m, t, k) << endl;

    return 0;
}

double periodicPayment(double l, double R, int M, int T)
{
    double i;
    double loan;
    i = R / M;
    loan = (l * i) / (1 - pow(1 + i, -1 * M * T));
    return loan;
}

double unpaidBalance(double l, double R, int M, int T, int K)
{
    double unpaidLoan;
    double i = R / M;
    double power = -1.0 * (M * T - K);
    unpaidLoan = periodicPayment(l, R, M, T) * ((1 - pow(1 + i, power)) / i);
    return unpaidLoan;
}
