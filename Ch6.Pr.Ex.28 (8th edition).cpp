#include <iostream>
#include <iomanip>

using namespace std;

const double SMALL_CUP_MASS = 9; // in oz.
const double MEDIUM_CUP_MASS = 12; // in oz.
const double LARGE_CUP_MASS = 15; // in oz.

const double SMALL_CUP_PRICE = 1.75; // in $
const double MEDIUM_CUP_PRICE = 1.90; // in $
const double LARGE_CUP_PRICE = 2.00; // in $

void generalInfo();
void initialize(int&, int&, int&, double&, double&);
void choices(int&);
void cups(int&);
void totalCupsFunction(int&, int&, int&, int&, int&);
void totalCoffeeFunction(int&, int&, int&);
void totalMoneyMade(int&, int&, int&);

int main()
{
    int totalSmallCupsSold, totalMediumCupsSold, totalLargeCupsSold;
    int sizeOfCup;
    int cupCount;
    double totalCoffeeSold;
    double totalMoney;

    generalInfo();
    initialize(totalSmallCupsSold, totalMediumCupsSold, totalLargeCupsSold, totalCoffeeSold, totalMoney);

    cout << fixed << showpoint << setprecision(2);

    while (sizeOfCup)
    {
        choices(sizeOfCup);
        cups(cupCount);
        totalCupsFunction(totalSmallCupsSold, totalMediumCupsSold, totalLargeCupsSold, cupCount, sizeOfCup);
        totalCoffeeFunction(totalSmallCupsSold, totalMediumCupsSold, totalLargeCupsSold);
        totalMoneyMade(totalSmallCupsSold, totalMediumCupsSold, totalLargeCupsSold);
    }

    return 0;
}

void generalInfo()
{
    cout << "This program is designed for coffee shop to be operational." << endl;
    cout << "To use this program select appropriate options provided." << endl;
}

void initialize(int& cupsSmall, int& cupsMedium, int& cupsLarge, double& coffee, double& money)
{
    cupsSmall = 0;
    cupsMedium = 0;
    cupsLarge = 0;
    coffee = 0;
    money = 0;
}

void choices(int& cupSize)
{
    cout << "---" << endl;
    cout << "Please choose coffee cup size: " << endl;
    cout << "-Small (press 1)" << endl;
    cout << "-Medium (press 2)" << endl;
    cout << "-Large (press 3)" << endl;

    cin >> cupSize;
    cout << endl;
}

void cups(int& coffeeCups)
{
    cout << "How many coffee cups would you like?: ";
    cin >> coffeeCups;
    cout << endl;
}

void totalCupsFunction(int& totalSmall, int& totalMedium, int& totalLarge, int& cupsCount, int& sizeOfCup)
{
    switch(sizeOfCup)
    {
    case 1:
        totalSmall = totalSmall + cupsCount;
        break;
    case 2:
        totalMedium = totalMedium + cupsCount;
        break;
    case 3:
        totalLarge = totalLarge + cupsCount;
        break;
    }
        cout << "Small Cups Sold: " << totalSmall << endl;
        cout << "Medium Cups Sold: " << totalMedium << endl;
        cout << "Large Cups Sold: " << totalLarge << endl;
}

void totalCoffeeFunction (int& totalSmall, int& totalMedium, int& totalLarge)
{
    double totalSmallMass, totalMediumMass, totalLargeMass;

    totalSmallMass = totalSmall * SMALL_CUP_MASS;
    totalMediumMass = totalMedium * MEDIUM_CUP_MASS;
    totalLargeMass = totalLarge * LARGE_CUP_MASS;

    cout << "Total Coffee Sold: " << totalSmallMass + totalMediumMass + totalLargeMass << "oz." << endl;
}

void totalMoneyMade(int& totalSmall, int& totalMedium, int& totalLarge)
{
    cout << "Total money made: $" << totalSmall * SMALL_CUP_PRICE + totalMedium * MEDIUM_CUP_PRICE + totalLarge * LARGE_CUP_PRICE << endl;
}
