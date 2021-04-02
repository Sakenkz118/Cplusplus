#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double baseSalary;
    int noOfServiceYears;
    double bonus;
    double totalSales;
    double additionalBonus;
    double paycheck = 0;

    cout << "Enter base salary: $";
    cin >> baseSalary;
    cout << endl;

    cout << "Input number of years worked in a store: ";
    cin >> noOfServiceYears;
    cout << endl;

    cout << "Enter the total sales made: $";
    cin >> totalSales;
    cout << endl;

    if (noOfServiceYears <= 5)
        bonus = 10 * noOfServiceYears;
    else
        bonus = 20 * noOfServiceYears;

    if (totalSales < 5000.00)
        additionalBonus = 0;
    else if (totalSales >= 5000.00 && totalSales < 10000.00)
             additionalBonus = totalSales * 0.03;
    else
        additionalBonus = totalSales * 0.06;

    paycheck = baseSalary + bonus + additionalBonus;

    cout << "Final paycheck is $" << paycheck << endl;

    return 0;
}

