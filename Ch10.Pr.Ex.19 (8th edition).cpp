#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class accountSaving
{
public:
    void setParameters(double D, int M, double R, double T);
    // Function to set the values of account
    // Postcondition: d = D, m = M, r = R, t = T

    double getDeposit() const;
    // Function to return the deposit amount
    // Postcondition: deposit amount is returned

    void setDeposit(double D);
    // Function to set the deposit amount
    // Postcondition: deposit amount is set accordingly, d = D

    int getInstallment() const;
    // Function to return the installments count
    // Postcondition: installments count is returned

    void setInstallment(int M);
    // Function to set the installments count
    // Postcondition: installments count is set accordingly, m = M

    double getRate() const;
    // Function to return the interest rate
    // Postcondition: interest rate is returned

    void setRate(double R);
    // Function to set the annual rate
    // Postcondition: annual rate is set accordingly, r = R

    double getTime() const;
    // Function to return the time in years
    // Postcondition: time in years is returned

    void setTime(double T);
    // Function to set the time in years
    // Postcondition: time in years is set accordingly, t = T

    void printParameters() const;
    // Function to display instance variables
    // Postcondition: instance variables are displayed

    double totalAmount(double D, int M, double R, double T) const;
    // Function to calculate amount accumulated
    // Postcondition: amount accumulated is calculated and returned

    double calculatePeriodic(double S, int M, double R, double T) const;
    // Function to calculate periodic payment needed for S amount to be accumulated
    // Postcondition: periodic payment is calculated and returned

    accountSaving(); // default constructor
    accountSaving(double, double, double); // constructor with parameters with default m = 12
    accountSaving(double, int, double, double); // constructor with parameters

private:
    double d;               // deposited amount
    int m;                  // count of annual installments
    double r;               // annual interest rate
    double t;               // time in years
};

int main()
{
    accountSaving myAccount;

    myAccount.printParameters();

    cout << fixed << showpoint << setprecision(2);

    cout << "Deposit needed: " << myAccount.calculatePeriodic(1000000, 12, 0.125, 2) << endl;

    return 0;
}

accountSaving::accountSaving()
{
    d = 0.0;
    m = 0;
    r = 0.0;
    t = 0.0;
}

accountSaving::accountSaving(double D, double R, double T)
{
    d = D;
    m = 12;
    r = R;
    t = T;
}

accountSaving::accountSaving(double D, int M, double R, double T)
{
    d = D;
    m = M;
    r = R;
    t = T;
}

void accountSaving::setParameters(double D, int M, double R, double T)
{
    // set all parameters so that non-negative values are entered only
    if(D >= 0)
        d = D;
    else
        d = 0.0;

    if(M >= 0)
        m = M;
    else
        m = 0;

    if(R >= 0)
        r = R;
    else
        r = 0.0;

    if(T >= 0)
        t = T;
    else
        t = 0.0;
}

double accountSaving::getDeposit() const
{
    return d;
}

void accountSaving::setDeposit(double D)
{
    if(D >= 0)
        d = D;
}

int accountSaving::getInstallment() const
{
    return m;
}

void accountSaving::setInstallment(int M)
{
    if(M >= 0)
        m = M;
}

double accountSaving::getRate() const
{
    return r;
}

void accountSaving::setRate(double R)
{
    if(R >= 0)
        r = R;
    else
        r = 0.0;
}

double accountSaving::getTime() const
{
    return t;
}

void accountSaving::setTime(double T)
{
    if(T >= 0)
        t = T;
    else
        t = 0.0;
}

void accountSaving::printParameters() const
{
    cout << "***** Account Info *****" << endl;
    cout << "------------------------" << endl;
    cout << "Deposit amount: " << d << endl;
    cout << "Installments number: " << m << endl;
    cout << "Interest rate: " << r << " or " << r * 100 << "%" << endl;
    cout << "Time: " << t << " year(s)" << endl;
}

double accountSaving::totalAmount(double D, int M, double R, double T) const
{
    return (D * (pow((1 + (R / M)), M * T) - 1) / (R / M));
}

double accountSaving::calculatePeriodic(double S, int M, double R, double T) const
{
    return ((S * (R / M)) / (pow((1 + (R / M)), M * T) - 1));
}
