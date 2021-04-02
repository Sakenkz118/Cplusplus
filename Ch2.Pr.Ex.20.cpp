#include <iostream>

using namespace std;

const double CARTON_CAPACITY = 3.78; // units in liters

int main ()
{
    double amountMilk = 0;
    int cartons;
    double totalCost, profit, costMilk, profitCarton;


    cout << "Please enter the total amount of milk produced in the morning: "; // step a
    cin >> amountMilk;
    cout << endl;

    cout << "Please define the the cost of producing one liter of milk "
    << "and the profit on each carton of milk: ";
    cin >> costMilk >> profitCarton;
    cout << endl;


    cartons = amountMilk / CARTON_CAPACITY;

    cout << "The number of milk cartons needed to hold milk is "; // step b
    cout << cartons << endl;

    totalCost = amountMilk * costMilk;
    profit = profitCarton * cartons;

    cout << "The cost of producing milk is $" << totalCost << endl; // step c
    cout << "The profit for producing milk is $" << profit << endl; // step d

    return 0;
}
