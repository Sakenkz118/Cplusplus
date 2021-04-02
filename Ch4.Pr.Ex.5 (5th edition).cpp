#include <iostream>
#include <iomanip>

using namespace std;

const double SERVICE_CHARGE = 3.00;

int main ()
{
    int faxPages = 0;
    double amoundDue = 0;

    cout << "Please enter the number of pages to fax: ";
    cin >> faxPages;
    cout << endl;

    if (amoundDue <= 10)
        amoundDue = faxPages * 0.20 + SERVICE_CHARGE;
    else
        amoundDue = (faxPages - 10) * 0.10 + SERVICE_CHARGE;

    cout << fixed << showpoint << setprecision(2);

    cout << "The amount to pay: $" << amoundDue << endl;

    return 0;
}
