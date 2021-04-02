#include <iostream>

using namespace std;

namespace telephone
{
    const double REGULAR_SERVICE_BASE = 10.00;
    const double PREMIUM_SERVICE_BASE = 25.00;
    const double REGULAR_SERVICE_FREE_TIME = 50;
    const double PREMIUM_SERVICE_RATE = 0.20;
    const double PREMIUM_DAYTIME_FREE = 75;
    const double PREMIUM_NIGHTTIME_FREE = 100;
    const double PREMIUM_DAYTIME_OVER_RATE = 0.10;
    const double PREMIUM_NIGHTTIME_OVER_RATE = 0.05;
}

int main ()
{
    int accountNumber;
    char service_code;
    int timeUsed = 0, timeUsedDayTime = 0, timeUsedNight = 0; // in minutes
    double amountDue = 0;

    cout << "Enter an account number: ";
    cin >> accountNumber;
    cout << endl;

    cout << "Service code: ";
    cin >> service_code;
    cout << endl;
    cout << endl;

    switch (service_code)
    {
        case 'r':
        case 'R':
            cout << "Enter minutes telephone service was used: ";
            cin >> timeUsed;
            cout << endl;

            if (timeUsed <= telephone::REGULAR_SERVICE_FREE_TIME)
            amountDue = telephone::REGULAR_SERVICE_BASE;
            else amountDue = telephone::REGULAR_SERVICE_BASE + (timeUsed - telephone::REGULAR_SERVICE_FREE_TIME) * telephone::PREMIUM_SERVICE_RATE;

            cout << "RESULTS" << endl;
            cout << "The account number: " << accountNumber << endl;
            cout << "The type of service: " << service_code << endl;
            cout << "The number of minutes the telephone service was used: " << timeUsed << " minute(s)" << endl;
            cout << "The amount due: $" << amountDue << endl;

            break;
        case 'p':
        case 'P':
            cout << "Enter minutes telephone service was used from 6:00 a.m. to 6:00 p.m.: ";
            cin >> timeUsedDayTime;
            cout << endl;

            cout << "Enter minutes telephone service was used from 6:00 p.m. to 6:00 a.m.: ";
            cin >> timeUsedNight;
            cout << endl;

            if (timeUsedDayTime <= telephone::PREMIUM_DAYTIME_FREE)
            amountDue = telephone::PREMIUM_SERVICE_BASE;
            else amountDue = telephone::PREMIUM_SERVICE_BASE + (timeUsedDayTime - telephone::PREMIUM_DAYTIME_FREE) * telephone::PREMIUM_DAYTIME_OVER_RATE;

            if (timeUsedNight <= telephone::PREMIUM_NIGHTTIME_FREE)
            amountDue = amountDue + 0.00;
            else amountDue = amountDue + (timeUsedNight - telephone::PREMIUM_NIGHTTIME_FREE) * telephone::PREMIUM_NIGHTTIME_OVER_RATE;

            cout << "RESULTS" << endl;
            cout << "The account number: " << accountNumber << endl;
            cout << "The type of service: " << service_code << endl;
            cout << "The number of minutes the telephone service was used: " << timeUsedNight + timeUsedDayTime << " minute(s)" << endl;
            cout << "The amount due: $" << amountDue << endl;

            break;
        default:
            cout << "Invalid value for service code!. Try again!" << endl;
    }

    return 0;
}

