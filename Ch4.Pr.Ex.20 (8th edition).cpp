#include <iostream>
#include <iomanip>

using namespace std;

const double DISCOUNT_10_ROOMS = 10; // %
const double DISCOUNT_20_ROOMS = 20; // %
const double DISCOUNT_30_ROOMS = 30; // %
const double ADDITIONAL_DISCOUNT = 5; //%

int main ()
{
    double roomRentDaily = 0;
    int noRoomsBooked = 0;
    int days = 0;
    double salesTax = 0; // %
    char answer;
    double totalRent = 0, totalBilling = 0, discount = 0, salesTaxAmount = 0;

    cout << "Is booking done for special occasions, i.e. wedding or conference (y or n): ";
    cin >> answer;
    cout << endl;

    switch (answer)
    {
    case 'y':

        cout << "Please enter the cost of renting one room per night: $";
        cin >> roomRentDaily;
        cout << endl;


        cout << "The number of rooms booked: ";
        cin >> noRoomsBooked;
        cout << endl;

        cout << "The number of days the rooms are booked: ";
        cin >> days;
        cout << endl;

        cout << "The sales tax in %: ";
        cin >> salesTax;
        cout << endl;

        if (noRoomsBooked < 0 || roomRentDaily < 0 || salesTax < 0)
        cout << "The numbers cannot be negative!" << endl;

        if (days < 3 && days >= 0)
        {
        if (noRoomsBooked >= 10 && noRoomsBooked < 20)
        {
        totalRent = roomRentDaily * noRoomsBooked * days * ((100 - DISCOUNT_10_ROOMS) / 100);
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        discount = DISCOUNT_10_ROOMS;
        }
        else if (noRoomsBooked >= 20 && noRoomsBooked < 30)
        {
        totalRent = roomRentDaily * noRoomsBooked * days * ((100 - DISCOUNT_20_ROOMS) / 100);
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        discount = DISCOUNT_20_ROOMS;
        }
        else if (noRoomsBooked >= 30)
        {
        totalRent = roomRentDaily * noRoomsBooked * days * ((100 - DISCOUNT_30_ROOMS) / 100);
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        discount = DISCOUNT_30_ROOMS;
        }
        else if (noRoomsBooked > 0 && noRoomsBooked < 10)
        {
        totalRent = roomRentDaily * noRoomsBooked * days;
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        discount = 0;
        }
        }
        else if (days >= 3)
        {
        if (noRoomsBooked >= 10 && noRoomsBooked < 20)
        {
        totalRent = roomRentDaily * noRoomsBooked * days * ((100 - (DISCOUNT_10_ROOMS + ADDITIONAL_DISCOUNT)) / 100);
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        discount = DISCOUNT_10_ROOMS;
        }
        else if (noRoomsBooked >= 20 && noRoomsBooked < 30)
        {
        totalRent = roomRentDaily * noRoomsBooked * days * ((100 - (DISCOUNT_20_ROOMS + ADDITIONAL_DISCOUNT)) / 100);
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        discount = DISCOUNT_20_ROOMS;
        }
        else if (noRoomsBooked >= 30)
        {
        totalRent = roomRentDaily * noRoomsBooked * days * ((100 - (DISCOUNT_30_ROOMS + ADDITIONAL_DISCOUNT)) / 100);
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        discount = DISCOUNT_30_ROOMS;
        }
        else if (noRoomsBooked > 0 && noRoomsBooked < 10)
        {
        totalRent = roomRentDaily * noRoomsBooked * days * ((100 - ADDITIONAL_DISCOUNT)/100);
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        discount = 0;
        }
        }

        cout << endl;

        cout << fixed << showpoint << setprecision(2);

        cout << "Cost of renting one room per night: $" << roomRentDaily << endl;
        cout << "Discount on each room as a percent: " << discount << "%" << endl;
        cout << "The number of rooms booked: " << noRoomsBooked << endl;
        cout << "The number of days the rooms are booked: " << days << endl;
        cout << "The total cost of the rooms: $" << totalRent << endl;
        cout << "The sales tax: $" << salesTaxAmount << endl;
        cout << "The total billing amount: $" << totalBilling << endl;

    break;

    case 'n':

        cout << "Please enter the cost of renting one room per night: $";
        cin >> roomRentDaily;
        cout << endl;

        cout << "The number of rooms booked: ";
        cin >> noRoomsBooked;
        cout << endl;

        cout << "The number of days the rooms are booked: ";
        cin >> days;
        cout << endl;

        cout << "The sales tax in %: ";
        cin >> salesTax;
        cout << endl;

        if (noRoomsBooked < 0 || roomRentDaily < 0 || salesTax < 0)
        cout << "The numbers cannot be negative!" << endl;

        if (days < 3 && days >= 0)
        {
        totalRent = roomRentDaily * noRoomsBooked * days;
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        }
        else if (days >= 3)
        {
        totalRent = roomRentDaily * noRoomsBooked * days * ((100 - ADDITIONAL_DISCOUNT) / 100);
        totalBilling = totalRent * (1 + (salesTax / 100));
        salesTaxAmount = totalRent * (salesTax / 100);
        }

        cout << endl;

        cout << fixed << showpoint << setprecision(2);

        cout << "Cost of renting one room per night: $" << roomRentDaily << endl;
        cout << "Discount on each room as a percent: " << 0 << "%" << endl;
        cout << "The number of rooms booked: " << noRoomsBooked << endl;
        cout << "The number of days the rooms are booked: " << days << endl;
        cout << "The total cost of the rooms: $" << totalRent << endl;
        cout << "The sales tax: $" << salesTaxAmount << endl;
        cout << "The total billing amount: $" << totalBilling << endl;

    break;

    default:
        cout << "Wrong value for answer!" << endl;
    }


    return 0;
}

