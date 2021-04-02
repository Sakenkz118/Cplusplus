#include <iostream>

using namespace std;

int main ()
{
    double totalBilling = 0;
    int itemsCount = 0;
    double price;

    cout << "Please enter the number of items ordered: ";
    cin >> itemsCount;
    cout << endl;

    cout << "Enter price(s) in $ for each item ordered: ";

    for (int i = 0; i < itemsCount; i++)
    {
        cin >> price;
        cout << " ";
        totalBilling = totalBilling + price;
    }
    cout << endl;

    if (totalBilling >= 200)
    {
        cout << "The total billing amount: $" << totalBilling << endl;
    }
    else
    {
        totalBilling = totalBilling + 10 * itemsCount;
        cout << "The total billing amount: $" << totalBilling << endl;
    }

    return 0;
}
