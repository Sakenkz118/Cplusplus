#include <iostream>
#include <iomanip>

using namespace std;

double regularBill();
double premiumBill();

int main ()
{
    int accountNumber;
    char service_code;
    double amountDue = 0;

    cout << "Enter an account number: ";
    cin >> accountNumber;
    cout << endl;

    cout << "Service code: ";
    cin >> service_code;
    cout << endl;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    switch (service_code)
    {
        case 'r':
        case 'R':
            amountDue = regularBill();

            cout << "RESULTS" << endl;
            cout << "The account number: " << accountNumber << endl;
            cout << "The type of service: " << service_code << endl;
            cout << "The amount due: $" << amountDue << endl;
            break;
        case 'p':
        case 'P':
            amountDue = premiumBill();

            cout << "RESULTS" << endl;
            cout << "The account number: " << accountNumber << endl;
            cout << "The type of service: " << service_code << endl;
            cout << "The amount due: $" << amountDue << endl;
            break;

        default:
            cout << "Invalid value for service code!. Try again!" << endl;
    }

    return 0;
}

double regularBill()
{
    int bAmount;
    int timeUsed = 0; // in minutes

    cout << "Enter minutes telephone service was used: ";
    cin >> timeUsed;
    cout << endl;

    if (timeUsed <= 50)
        bAmount = 10.00;
    else
        bAmount = 10.00 + (timeUsed - 50) * 0.20;

    return bAmount;
}
double premiumBill()
{
    int bAmount;
    int timeUsed = 0, timeUsedDayTime = 0, timeUsedNight = 0; // in minutes

    cout << "Enter minutes telephone service was used from 6:00 a.m. to 6:00 p.m.: ";
    cin >> timeUsedDayTime;
    cout << endl;

    cout << "Enter minutes telephone service was used from 6:00 p.m. to 6:00 a.m.: ";
    cin >> timeUsedNight;
    cout << endl;

    if (timeUsedDayTime <= 75)
    bAmount = 25.00;
    else bAmount = 25.00 + (timeUsedDayTime - 75) * 0.10;

    if (timeUsedNight <= 100)
    bAmount = bAmount + 0.00;
    else bAmount = bAmount + (timeUsedNight - 100) * 0.05;

    return bAmount;
}
