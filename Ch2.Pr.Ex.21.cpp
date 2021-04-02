#include <iostream>

using namespace std;

const int DURATION_IN_WEEKS = 5; // duration of summer job for five weeks
const double TOTAL_TAXRATE = 0.14; // 14% total tax rate for gross income
const double CLOTHES_AND_ACCESSORIES = 0.10; // 10% of net income to buy new clothes and other accessories for the next school year
const double SCHOOL_SUPPLIES = 0.01; // 1% of net income to buy school supplies
const double SAVINGS_BOND = 0.25; // 25% of the net income minus other expenses to buy savings bond
const double EXTRA_MONEY = 0.50; // parents spend $0.50 to buy additional savings bonds for each dollar

int main ()
{
    double hourlyPayrate;
    int workedHoursWeekly;
    double grossIncome, netIncome; // before and after tax deductions
    double clothesAccessories; // clothes and accessories expenses
    double schoolSupplies; // school supplies expenses
    double savingBonds; // expenses to buy savings bonds
    double additionalBonds; // expenses to buy additional savings bonds

    cout << "Please enter the pay rate for an hour($): ";
    cin >> hourlyPayrate;
    cout << endl;

    cout << "Enter the number of hours worked each week: ";
    cin >> workedHoursWeekly;
    cout << endl;

    grossIncome = hourlyPayrate * DURATION_IN_WEEKS * workedHoursWeekly;
    netIncome = grossIncome * (1 - TOTAL_TAXRATE);

    cout << "Your income before and after taxes from your summer job: $" << grossIncome << ", $" << netIncome << endl; // step a

    clothesAccessories = netIncome * CLOTHES_AND_ACCESSORIES;
    schoolSupplies = netIncome * SCHOOL_SUPPLIES;

    cout << "The money you spend on clothes and other accessories: $" << clothesAccessories << endl;                  // step b
    cout << "The money you spend on school supplies: $" << schoolSupplies << endl;                                     // step c

    netIncome = netIncome - (clothesAccessories + schoolSupplies);

    savingBonds = netIncome * SAVINGS_BOND;

    cout << "The money you spend to buy savings bonds: $" << savingBonds << endl;

    additionalBonds = static_cast<int>(savingBonds) * EXTRA_MONEY;

    cout << "The money your parents spend to buy additional savings bonds for you: $ " << additionalBonds;

    return 0;
}
