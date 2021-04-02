#include <iostream>
#include <iomanip>

using namespace std;

double consultingCalculator(double, double, char);

int main ()
{
    double hourlyRate, consultingTime;
    char incomeType;
    double billingAmount;

    cout << "Please enter the hourly rate in $: ";
    cin >> hourlyRate;
    cout << endl;

    cout << "Input the total consulting time in minutes: ";
    cin >> consultingTime;
    cout << endl;

    cout << "Does the person has low income (<= 25,000 USD):(y, Y or n, N) ";
    cin >> incomeType;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    billingAmount = consultingCalculator(hourlyRate, consultingTime, incomeType);

    cout << "Total billing amount: " << billingAmount << "$" << endl;

    return 0;
}

double consultingCalculator(double rate, double time, char type)
{
    double bAmount;

    switch(type)
    {
    case 'y':
    case 'Y':
        if (time <= 30.0)
            bAmount = 0;
        else
            bAmount = ((time - 30.0) / 60.0) * 0.40 * rate;
        break;
    case 'n':
    case 'N':
        if (time <= 20.0)
            bAmount = 0;
        else
            bAmount = ((time - 20.0) / 60.0) * 0.70 * rate;
        break;
    default:
        {
        cout << "Wrong income type entered!" << endl;
        return 0;
        }
    }
    return bAmount;
}
