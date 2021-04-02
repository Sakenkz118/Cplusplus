#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double totalMerchandiseCost, AnnualSalaries, AnnualRent, AnnualElectricityCost;
    double markedUp;
    double totalExpenses, netProfit, afterSales;

    cout << "Please enter the total cost of the merchandise: $";
    cin >> totalMerchandiseCost;
    cout << endl;

    cout << "The salary of the employees(including her own salary): $";
    cin >> AnnualSalaries;
    cout << endl;

    cout << "The yearly rent: $";
    cin >> AnnualRent;
    cout << endl;

    cout << "The estimated electricity cost: $";
    cin >> AnnualElectricityCost;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    totalExpenses = totalMerchandiseCost + AnnualSalaries + AnnualRent + AnnualElectricityCost;
    netProfit = 0.1 * totalMerchandiseCost;

    markedUp = netProfit + totalExpenses;
    afterSales = markedUp * 1.15;

    cout << "Total expenses: $" << totalExpenses << endl;
    cout << "Net Profit: $" << netProfit << endl;
    cout << "The marked up: $" << afterSales - markedUp << endl;

    return 0;
}
