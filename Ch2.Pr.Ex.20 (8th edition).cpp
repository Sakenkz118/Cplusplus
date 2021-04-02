#include <iostream>

using namespace std;

int main ()
{
    double fixedCommission; // in USD
    double commissionRate; // in %
    double purchasingCost; // in USD
    double minimumAmount; // in USD
    double maximumAmount; // in USD
    double minimumPrice; // in USD
    double maximumPrice; // in USD

    cout << "Please enter the salesperson's fixed commission: $";
    cin >> fixedCommission;
    cout << endl;

    cout << "Please enter the percentage of the commission: %";
    cin >> commissionRate;
    cout << endl;

    cout << "Please enter the purchasing cost of the car: $";
    cin >> purchasingCost;
    cout << endl;

    cout << "Please enter the minimum and maximum amount to be added($): ";
    cin >> minimumAmount >> maximumAmount;
    cout << endl;
    cout << endl;

    minimumPrice = fixedCommission + minimumAmount + purchasingCost + minimumAmount * (commissionRate/100) + fixedCommission;
    maximumPrice = fixedCommission + maximumAmount + purchasingCost + maximumAmount * (commissionRate/100) + fixedCommission;

    cout << "The the minimum and maximum selling prices are $" << minimumPrice << ", $";
    cout <<  maximumPrice << endl;

    cout << endl;

    cout << "The salesperson's commission range is from $" << minimumAmount * (commissionRate/100) + fixedCommission;
    cout << " to $" << maximumAmount * (commissionRate/100) + fixedCommission;

    return 0;
}
