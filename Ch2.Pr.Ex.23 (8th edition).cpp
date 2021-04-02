#include <iostream>

using namespace std;

const double SERVICE_CHARGE = 0.015;

int main ()
{
    int noSharesSold;
    double purchasePrice; // average purchase price
    double sellingPrice; // average selling price
    double amountInvested;
    double totalService;
    double amountReceived;
    double lostGain;

    cout << "Please enter the total number of purchases: ";
    cin >> noSharesSold;
    cout << endl;

    cout << "Enter the average purchase price: $";
    cin >> purchasePrice;
    cout << endl;

    cout << "Enter the average selling price: $";
    cin >> sellingPrice;
    cout << endl;

    amountReceived = (sellingPrice * noSharesSold) * (1 - SERVICE_CHARGE);

    amountInvested = purchasePrice * noSharesSold;

    totalService = (amountInvested + sellingPrice * noSharesSold) * SERVICE_CHARGE;

    lostGain = (sellingPrice - purchasePrice) * noSharesSold;

    cout << "The amount invested: $" << amountInvested << endl;
    cout << "The total service charge: $" << totalService << endl;
    cout << "The amount received after selling the stock: $" << amountReceived << endl;
    cout << "The amount gained or lost: $" << lostGain << endl;

    return 0;
}
