#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const double FEDERAL_INCOME_TAX = 15;    // %
const double STATE_TAX = 3.5;            // %
const double SOCIAL_SECURITY_TAX = 5.75; // %
const double MEDICARE_TAX = 2.75;        // %
const double PENSION_PLAN = 5;           // %
const double HEALTH_INSURANCE = 75;      // $

int main ()
{
    ofstream outFile;
    string firstName, lastName;
    double grossIncome;
    double federalTax, stateTax, socialSecurityTax;
    double medicaidTax, pensionPlan, netIncome;

    outFile << fixed << showpoint << setprecision(2);

    outFile.open("c:\\C++\\Ex4.txt");

    cout << "Enter the gross amount and the employee name: ";
    cin >> grossIncome >> firstName >> lastName;
    cout << endl;

    cout << "Processing data" << endl;

    federalTax = grossIncome * (FEDERAL_INCOME_TAX / 100);
    stateTax = grossIncome * (STATE_TAX / 100);
    socialSecurityTax = grossIncome * (SOCIAL_SECURITY_TAX / 100);
    medicaidTax = grossIncome * (MEDICARE_TAX / 100);
    pensionPlan = grossIncome * (PENSION_PLAN / 100);
    netIncome = grossIncome - (federalTax + stateTax + socialSecurityTax + medicaidTax + pensionPlan + HEALTH_INSURANCE);

    outFile << left << firstName << " " << lastName << endl;

    outFile << setfill('.') << left << setw(26) << "Gross Income: "
            << setfill(' ') << right << " $" << setw(7) << grossIncome << endl;

    outFile << setfill('.') << left << setw(26) << "Federal Tax: "
            << setfill(' ') << right << " $" << setw(7) << federalTax << endl;

    outFile << setfill('.') << left << setw(26) << "State Tax: "
            << setfill(' ') << right << " $" << setw(7) << stateTax << endl;

    outFile << setfill('.') << left << setw(26) << "Social Security Tax: "
            << setfill(' ') << right << " $" << setw(7) << socialSecurityTax << endl;

    outFile << setfill('.') << left << setw(26) << "Medicare/Medicaid Tax: "
            << setfill(' ') << right << " $" << setw(7) << medicaidTax << endl;

    outFile << setfill('.') << left << setw(26) << "Pension Plan: "
            << setfill(' ') << right << " $" << setw(7) << pensionPlan << endl;

    outFile << setfill('.') << left << setw(26) << "Health Insurance: "
            << setfill(' ') << right << " $" << setw(7) << HEALTH_INSURANCE << endl;

    outFile << setfill('.') << left << setw(26) << "Net Pay: "
            << setfill(' ') << right << " $" << setw(7) << netIncome << endl;

    outFile.close();

    return 0;
}
