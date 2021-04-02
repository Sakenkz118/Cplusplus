#include <iostream>

using namespace std;

int main ()
{
    double originalPrice;
    double markedUpRate;
    double salesTaxRate;
    double storePrice;
    double grossPrice;
    double salesTax;

    // Read necessary information

    cout << "Please enter the original sold price (any currency): ";
    cin >> originalPrice;
    cout << endl;

    cout << "Please enter the amount (%) to mark up: ";
    cin >> markedUpRate;
    cout << endl;

    cout << "Please enter the sales tax rate(%): ";
    cin >> salesTaxRate;
    cout << endl;

    // Actual calculations

    storePrice = originalPrice * (1 + (markedUpRate) /100 );
    salesTax = salesTaxRate/100 * storePrice;
    grossPrice = storePrice + salesTax;

    // Outputs

    cout << "The original price of an item $" << originalPrice << endl;
    cout << "The percentage of the mark-up is " << markedUpRate << "%" << endl;
    cout << "The store's selling price of the item is $" << storePrice << endl;
    cout << "The sales tax rate is " << salesTaxRate << "%" << endl;
    cout << "The sales tax is $" << salesTax << endl;
    cout << "The final price of the item is $" << grossPrice << endl;

    return 0;
}
