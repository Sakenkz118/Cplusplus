#include <iostream>
#include <fstream>

using namespace std;

void openFile(ifstream& inFile);
void leapYear(int yearCheck, bool& isLeapYear);
void print(bool check, int year);
int dayYear(int Month, int Day, bool status);

ifstream inFile;

int main ()
{
    char hyphen;
    int month;
    int day;
    int year;
    bool status = false;
    int dayOfYear = 0;

    openFile(inFile);

    inFile >> month >> hyphen >> day >> hyphen >> year;
    leapYear(year, status);
    print(status, year);

    cout << "Day number of the date "
         << month << hyphen << day << hyphen << year << " = "
         << dayYear(month, day, status) << endl;

    while(!inFile.eof())
    {
        inFile >> month >> hyphen >> day >> hyphen >> year;
        leapYear(year, status);
        print(status, year);
        cout << "Day number of the date "
             << month << hyphen << day << hyphen << year << " = "
             << dayYear(month, day, status) << endl;
    }

    inFile.close();

    return 0;
}

void openFile(ifstream& inFile)
{
    inFile.open("c:\\C++\\Ch7_Ex5Data.txt");
}

void leapYear(int yearCheck, bool& isLeapYear)
{
    if((yearCheck % 4 == 0) && (yearCheck % 100 != 0))
        isLeapYear = true;
    else if ((yearCheck % 100 == 0) && (yearCheck % 400 == 0))
        isLeapYear = true;
    else
        isLeapYear = false;
}

void print(bool check, int year)
{
    if (check == true)
        cout << year << " is a leap year." << endl;
    else if (check == false)
        cout << year << " is NOT a leap year." << endl;
}

int dayYear(int Month, int Day, bool status)
{
    int dayNumber = 0;

    if (status == true)
    {
        switch(Month)
        {
        case 1:
            dayNumber = Day;
            break;
        case 2:
            dayNumber = 31 + Day;
            break;
        case 3:
            dayNumber = 60 + Day;
            break;
        case 4:
            dayNumber = 91 + Day;
            break;
        case 5:
            dayNumber = 121 + Day;
            break;
        case 6:
            dayNumber = 152 + Day;
            break;
        case 7:
            dayNumber = 182 + Day;
            break;
        case 8:
            dayNumber = 213 + Day;
            break;
        case 9:
            dayNumber = 244 + Day;
            break;
        case 10:
            dayNumber = 274 + Day;
            break;
        case 11:
            dayNumber = 305 + Day;
            break;
        case 12:
            dayNumber = 335 + Day;
            break;
        }
    }
    else if (status == false)
    {
        switch(Month)
        {
        case 1:
            dayNumber = Day;
            break;
        case 2:
            dayNumber = 31 + Day;
            break;
        case 3:
            dayNumber = 59 + Day;
            break;
        case 4:
            dayNumber = 90 + Day;
            break;
        case 5:
            dayNumber = 120 + Day;
            break;
        case 6:
            dayNumber = 151 + Day;
            break;
        case 7:
            dayNumber = 181 + Day;
            break;
        case 8:
            dayNumber = 212 + Day;
            break;
        case 9:
            dayNumber = 243 + Day;
            break;
        case 10:
            dayNumber = 273 + Day;
            break;
        case 11:
            dayNumber = 304 + Day;
            break;
        case 12:
            dayNumber = 334 + Day;
            break;
        }
    }
    return dayNumber;
}
