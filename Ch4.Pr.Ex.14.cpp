#include <iostream>

using namespace std;

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

            if (timeUsed <= 50)
            amountDue = 10.00;
            else amountDue = 10.00 + (timeUsed - 50) * 0.20;

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

            if (timeUsedDayTime <= 75)
            amountDue = 25.00;
            else amountDue = 25.00 + (timeUsedDayTime - 75) * 0.10;

            if (timeUsedNight <= 100)
            amountDue = amountDue + 0.00;
            else amountDue = amountDue + (timeUsedNight - 100) * 0.05;

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

