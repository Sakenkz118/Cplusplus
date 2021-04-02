// This program calculates Federal Tax

#include <iostream>

using namespace std;

const double STANDARD_EXEMPTION_SINGLE = 4000.00; //in USD
const double STANDARD_EXEMPTION_MARRIED = 7000.00; //in USD
const double PERSONAL_EXEMPTION = 1500.00; //in USD

char status;
int kidsUnder14;
double grossSalary;
double percentageToPensionFund;
double taxableIncome;

void getData();
void taxAmount();

int main ()
{
    getData();
    taxAmount();
    return 0;
}

void getData()
{
    cout << "Please enter the marital status,- s or S for single, m or M for married:";
    cin >> status;
    cout << endl;

    switch (status)
    {
        case 's':
        case 'S':
                cout << "Enter gross salary: $";
                cin >> grossSalary;
                cout << endl;

                cout << "Enter % of Gross Income to be contributed to pension fund: ";
                cin >> percentageToPensionFund;
                cout << endl;

                if (percentageToPensionFund > 6 || percentageToPensionFund < 0)
                    cout << "Wrong value entered for contributed percentage!" << endl;

            break;
        case 'm':
        case 'M':
                cout << "Please enter the number of children under the age of 14: ";
                cin >> kidsUnder14;
                cout << endl;

                cout << "Enter combined gross salary of both spouses: $";
                cin >> grossSalary;
                cout << endl;

                cout << "Enter % of Gross Income to be contributed to pension fund: ";
                cin >> percentageToPensionFund;
                cout << endl;

                if (percentageToPensionFund > 6 || percentageToPensionFund < 0)
                    cout << "Wrong value entered for contributed percentage!" << endl;

            break;

        default:
            cout << "Wrong value(s) entered for marital status! Try again." << endl;
    }
}

void taxAmount()
{
    double federalTax = 0;

    switch (status)
    {
        case 's':
        case 'S':
            taxableIncome = grossSalary - (PERSONAL_EXEMPTION + STANDARD_EXEMPTION_SINGLE + grossSalary * (percentageToPensionFund / 100.00));

            cout << "Taxable Income: $ " << taxableIncome << endl;

        if (taxableIncome >= 0 && 15'000 >= taxableIncome)
            federalTax = taxableIncome * 0.15;
        else if (taxableIncome >= 15'001 && 40'000 >= taxableIncome)
            federalTax = 2250.00 + 0.25 * (taxableIncome - 15'000);
        else if (taxableIncome >= 40'000)
            federalTax = 8460.00 + 0.35 * (taxableIncome - 40'000);
        else
            cout << "Taxable income is below zero" << endl;

    cout << "Federal Tax amount: $" << federalTax << endl;
            break;
        case 'm':
        case 'M':
            taxableIncome = grossSalary - (PERSONAL_EXEMPTION * (2 + kidsUnder14) + STANDARD_EXEMPTION_MARRIED + grossSalary * (percentageToPensionFund / 100));

        if (taxableIncome >= 0 && 15'000 >= taxableIncome)
            federalTax = taxableIncome * 0.15;
        else if (taxableIncome >= 15'001 && 40'000 >= taxableIncome)
            federalTax = 2250.00 + 0.25 * (taxableIncome - 15'000);
        else if (taxableIncome >= 40'000)
            federalTax = 8460.00 + 0.35 * (taxableIncome - 40'000);

            cout << "Taxable Income: $ " << taxableIncome << endl;

            cout << "Federal Tax amount: $" << federalTax << endl;
            break;
    }

}
