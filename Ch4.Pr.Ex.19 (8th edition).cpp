#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double totalFarmArea; // in acres
    int noOfVegetables; // maximum of 2 types
    double fractionVeg1, fractionVeg2; // fractions, not percentages
    double seedCost1, plantationCost1, fertilizingCost1, laborCost1; // for each acre
    double seedCost2, plantationCost2, fertilizingCost2, laborCost2; // for each acre
    double sellingPrice1, sellingPrice2; // per acre
    double totalRevenue, profit, loss;
    double share1, share2, check;

    cout << "Please enter the total farm area, in acres: ";
    cin >> totalFarmArea;
    cout << endl;

    if (totalFarmArea >= 0)
    {
    cout << "The number of vegetables (one or two) that the user wants to grow: ";
    cin >> noOfVegetables;
    cout << endl;

    if (noOfVegetables == 1 || noOfVegetables == 2)
    {
        switch (noOfVegetables)
        {
        case 1:
            cout << "Also enter the seed cost, plantation cost, fertilizing cost, labor cost,"
                 << " for each acre: ";
            cin >> seedCost1 >> plantationCost1 >> fertilizingCost1 >> laborCost1;
            cout << endl;

            cout << "Enter the vegetable selling price per acre: $";
            cin >> sellingPrice1;
            cout << endl;

            totalRevenue = totalFarmArea * sellingPrice1;
            profit = totalRevenue - totalFarmArea * (seedCost1 + plantationCost1 + fertilizingCost1 + laborCost1);
            loss = totalRevenue - profit;

            cout << fixed << showpoint << setprecision(2);
            cout << "Total revenue: $" << totalRevenue << endl;
            cout << "Profit: $" << profit << endl;
            cout << "Loss: $" << loss << endl;

            break;

        case 2:
            cout << "Specify share of each type: ";
            cin >> share1 >> share2;
            cout << endl;

            check = share1 + share2;

            if (check == 1.00)
            {
            cout << "Also enter the seed cost, plantation cost, fertilizing cost, labor cost,"
                 << " for 1st type: ";
            cin >> seedCost1 >> plantationCost1 >> fertilizingCost1 >> laborCost1;

            cout << "Also enter the seed cost, plantation cost, fertilizing cost, labor cost,"
                 << " for 2nd type: ";
            cin >> seedCost2 >> plantationCost2 >> fertilizingCost2 >> laborCost2;
            cout << endl;

            cout << "Enter the 1st type vegetable selling price per acre: $";
            cin >> sellingPrice1;
            cout << endl;

            cout << "Enter the 2nd type vegetable selling price per acre: $";
            cin >> sellingPrice2;
            cout << endl;

            totalRevenue = totalFarmArea * (share1 * sellingPrice1 + share2 * sellingPrice2);
            cout << fixed << showpoint << setprecision(2);
            cout << "Total revenue: $" << totalRevenue << endl;
            profit = totalRevenue - totalFarmArea * (share1 * (seedCost1 + plantationCost1 + fertilizingCost1 + laborCost1) + share2 * (seedCost2 + plantationCost2 + fertilizingCost2 + laborCost2));
            loss = totalRevenue - profit;
            cout << "Profit: $" << profit << endl;
            cout << "Loss: $" << loss << endl;

            }
            else
                cout << "The fractions do not add up to 100%" << endl;

            break;
        }
    }
    else
        cout << "The number of vegetable types is invalid!" << endl;
    }
        else
            cout << "The area cannot be negative!" << endl;

    return 0;
}
