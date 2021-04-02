#include <iostream>

using namespace std;

const double CARTON_CAPACITY = 3.78; // units in liters
const double COST_OF_1LITER = 0.38; // prices in dollars
const double PROFIT_PER_CARTON = 0.27; // prices in dollars

int main ()
{
    double amountMilk = 0;
    int cartons;
    double totalCost, profit;

    cout << "Please enter the total amount of milk produced in the morning: "; // step a
    cin >> amountMilk;
    cout << endl;

    cartons = amountMilk / CARTON_CAPACITY;

    cout << "The number of milk cartons needed to hold milk is "; // step b
    cout << cartons << endl;

    totalCost = amountMilk * COST_OF_1LITER;
    profit = PROFIT_PER_CARTON * cartons;

    cout << "The cost of producing milk is $" << totalCost << endl; // step c
    cout << "The profit for producing milk is $" << profit << endl; // step d

    return 0;
}
