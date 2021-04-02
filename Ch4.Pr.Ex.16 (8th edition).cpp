#include <iostream>
#include <iomanip>

using namespace std;

const double FINAL_MANUSCRIPT = 5000;
const double NOVEL_PUBLISHED = 20000;
const double FIXED_ROYALTY_2ND = 12.5;
const double FIXED_ROYALTY_3RD_1 = 10.0;
const double FIXED_ROYALTY_3RD_2 = 14.0;
const int COPIES_SOLD = 4000;

int main ()
{
    double netPrice1 = 0;
    double netPrice2 = 0;
    double netPrice3 = 0;
    double cost = 0;
    int estimatedSold = 0;

    cout << "Please enter the net price of each copy of the novel: $";
    cin >> cost;
    cout << endl;

    cout << "Please enter the estimated number of copies that will be sold: ";
    cin >> estimatedSold;
    cout << endl;

    netPrice1 = FINAL_MANUSCRIPT + NOVEL_PUBLISHED;
    netPrice2 = (FIXED_ROYALTY_2ND / 100) * cost * estimatedSold;

    if (estimatedSold <= 4000 && estimatedSold >= 0)
        {
            netPrice3 = (FIXED_ROYALTY_3RD_1 / 100) * cost * estimatedSold;
            cout << fixed << showpoint << setprecision(2);
            cout << "First scenario: $" << netPrice1 << endl;
            cout << "Second scenario: $" << netPrice2 << endl;
            cout << "Third scenario: $" << netPrice3 << endl;
        }
    else if (estimatedSold > 4000)
        {
            netPrice3 = (FIXED_ROYALTY_3RD_2 / 100) * cost * (estimatedSold - 4000);
            cout << fixed << showpoint << setprecision(2);
            cout << "First scenario: $" << netPrice1 << endl;
            cout << "Second scenario: $" << netPrice2 << endl;
            cout << "Third scenario: $" << netPrice3 << endl;
        }
    else if (estimatedSold < 0)
            cout << "The number of copies sold cannot be negative!" << endl;

    cout << endl;

    if (netPrice1 > netPrice2 && netPrice1 > netPrice3)
        cout << "First option is economically sound decision:-) !" << endl;
        else if (netPrice2 > netPrice1 && netPrice2 > netPrice3)
            cout << "Second option is economically sound decision:-) !" << endl;
        else if (netPrice3 > netPrice1 && netPrice2 < netPrice3)
            cout << "Third option is economically sound decision:-) !" << endl;

    return 0;
}
