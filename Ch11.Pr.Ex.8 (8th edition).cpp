#include <iostream>
#include "dateType.h"

using namespace std;

class extDateType:public dateType
{
public:
    void printDate(int choice) const;
    // Function to output the date in either the form mm-dd-yyyy or "Month Day, Year".
    // Postcondition: date is printed in either forms as mm-dd-yyyy or "Month Day, Year".

    void printNewFormat() const;
    // Function to print the month followed by year.
    // Postcondition: month followed by year is printed.

    void setMonth();
    // Function to set the month value as string.
    // Postcondition: month is converted from numerical format to string one.

    string getMonth() const;
    // Function to return the month.
    // Postcondition: The value of month is returned.

private:
    string month;
};

void selection();

int main()
{
    extDateType myDate;
    int ch;

    myDate.setDate(12, 22, 2015);

    selection();
    cin >> ch;

    myDate.printDate(ch);

    myDate.setMonth();
    cout << endl;
    myDate.printNewFormat();

    return 0;
}

void extDateType::printDate(int choice) const
{
    switch(choice)
    {
    case 1:
        dateType::printDate();
        break;
    case 2:
        switch(dateType::getMonth())
        {
        case 1:
            cout << "January " << getDay() << ", " << getYear() << endl;
            break;
        case 2:
            cout << "February " << getDay() << ", " << getYear() << endl;
            break;
        case 3:
            cout << "March " << getDay() << ", " << getYear() << endl;
            break;
        case 4:
            cout << "April " << getDay() << ", " << getYear() << endl;
            break;
        case 5:
            cout << "May " << getDay() << ", " << getYear() << endl;
            break;
        case 6:
            cout << "June " << getDay() << ", " << getYear() << endl;
            break;
        case 7:
            cout << "July " << getDay() << ", " << getYear() << endl;
            break;
        case 8:
            cout << "August " << getDay() << ", " << getYear() << endl;
            break;
        case 9:
            cout << "September " << getDay() << ", " << getYear() << endl;
            break;
        case 10:
            cout << "October " << getDay() << ", " << getYear() << endl;
            break;
        case 11:
            cout << "November " << getDay() << ", " << getYear() << endl;
            break;
        case 12:
            cout << "December " << getDay() << ", " << getYear() << endl;
            break;
        }
        break;
    default:
        cout << "Wrong choice!" << endl;
        break;
    }
    cout << endl;
}

void selection()
{
    cout << "Please choose 2 options for displaying dates: " << endl;
    cout << "1: mm-dd-yyyy" << endl;
    cout << "2: mm(in words) dd, yyyy" << endl;
    cout << "Choice: ";
}

void extDateType::setMonth()
{
    switch(dateType::getMonth())
    {
        case 1:
            month = "January";
            break;
        case 2:
            month = "February";
            break;
        case 3:
            month = "March";
            break;
        case 4:
            month = "April";
            break;
        case 5:
            month = "May";
            break;
        case 6:
            month = "June";
            break;
        case 7:
            month = "July";
            break;
        case 8:
            month = "August";
            break;
        case 9:
            month = "September";
            break;
        case 10:
            month = "October";
            break;
        case 11:
            month = "November";
            break;
        case 12:
            month = "December";
            break;
        default:
            month = "Undefined";
        }
}

void extDateType::printNewFormat() const
{
    cout << extDateType::getMonth() << " " << getYear() << endl;
}

string extDateType::getMonth() const
{
    return month;
}
