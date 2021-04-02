#include <iostream>
#include <iomanip>

using namespace std;

const int MAXIMUM_UNITS = 50;

int main ()
{
    double rent;
    double increasePrice, newPrice = 0;
    double maintenance;
    double profit, maxProfit;
    int units, maxUnits;

    cout << "Please enter the monthly rent ($) to occupy all the units: ";
    cin >> rent;
    cout << endl;

    cout << "Input the increase in monthly rent ($) that results in a vacant unit: ";
    cin >> increasePrice;
    cout << endl;

    cout << "Monthly amount($) to maintain a rented unit: ";
    cin >> maintenance;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    profit = MAXIMUM_UNITS * (rent - maintenance);

    maxProfit = profit;

    for (units = MAXIMUM_UNITS - 1; units > 0; units--)
    {
        newPrice = increasePrice + newPrice;
        profit = units * (rent + newPrice - maintenance);

        if (profit > maxProfit)
        {
            maxProfit = profit;
            maxUnits = units;
        }
    }

    cout << "The number of units to be rented to maximize the profit is " << maxUnits << endl;
    cout << "Maximum profit is " << maxProfit << endl;

    return 0;
}
