#include <iostream>
#include <cmath>

using namespace std;

class dateType
{
public:
    void setDate(int month, int day, int year);
    // Function to set the date.
    // The member variables dMonth, dDay, and dYear are set
    // according to the parameters.
    // Postcondition: dMonth = month; dDay = day;
    // dYear = year;

    int getDay() const;
    // Function to return the day.
    // Postcondition: The value of dDay is returned.

    int getMonth() const;
    // Function to return the month.
    // Postcondition: The value of dMonth is returned.

    int getYear() const;
    // Function to return the year.
    // Postcondition: The value of dYear is returned.

    void printDate() const;
    // Function to output the date in the form mm-dd-yyyy.

    dateType(int month = 1, int day = 1, int year = 1900);
    // Constructor to set the date
    // The member variables dMonth, dDay, and dYear are set
    // according to the parameters.
    // Postcondition: dMonth = month; dDay = day; dYear = year;
    // If no values are specified, the default
    // values are used to initialize the member variables.

    bool isLeapYear(int);
    // Function to check for leap year
    // Postcondition: boolean expression is returned, 0(false) or 1(true)

private:
    int dMonth; //variable to store the month
    int dDay; //variable to store the day
    int dYear; //variable to store the year
    bool isLeap; // variable to store leap year status
};

int main()
{
    dateType myDate(2, 29, 1988);
    myDate.setDate(2, 29, 2020);
    myDate.printDate();

    return 0;
}

bool dateType::isLeapYear(int year)
{
    if((year % 4 == 0) && (year % 100 != 0))
        return 1;
    else
        return 0;
}

void dateType::setDate(int month, int day, int year)
{
    if(year > 0)
        dYear = year;
    else
        dYear = 0;

    isLeap = isLeapYear(year);

    if(month >= 1 && month <= 12)
        dMonth = month;
    else
        dMonth = 0;

    if(dMonth == 4 || dMonth == 6 || dMonth == 9 || dMonth == 11) // months with always 30 days
    {
        if(day >= 1 && day <= 30)
            dDay = day;
        else
            dDay = 0;
    }
    else if (dMonth == 1 || dMonth == 3 || dMonth == 5 || dMonth == 7 || dMonth == 8 || dMonth == 10 || dMonth == 12) // months with always 31 days
    {
        if(day >= 1 && day <= 31)
            dDay = day;
        else
            dDay = 0;
    }
    else if(dMonth == 2)
    {
        if(!isLeap)
        {
            if(day >= 1 && day <= 28)
                dDay = day;
            else
                dDay = 0;
        }
        else if(isLeap)
        {
            if(day >= 1 && day <= 29)
                dDay = day;
            else
                dDay = 0;
        }
    }
    else
        dDay = 0;
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getMonth() const
{
    return dMonth;
}

int dateType::getYear() const
{
    return dYear;
}

void dateType::printDate() const
{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

// Constructor with parameters
dateType::dateType(int month, int day, int year)
{
    if(year > 0)
        dYear = year;
    else
        dYear = 0;

    isLeap = isLeapYear(year);

    if(month >= 1 && month <= 12)
        dMonth = month;
    else
        dMonth = 0;

    if(dMonth == 4 || dMonth == 6 || dMonth == 9 || dMonth == 11) // months with always 30 days
    {
        if(day >= 1 && day <= 30)
            dDay = day;
        else
            dDay = 0;
    }
    else if (dMonth == 1 || dMonth == 3 || dMonth == 5 || dMonth == 7 || dMonth == 8 || dMonth == 10 || dMonth == 12) // months with always 31 days
    {
        if(day >= 1 && day <= 31)
            dDay = day;
        else
            dDay = 0;
    }
    else if(dMonth == 2)
    {
        if(!isLeap)
        {
            if(day >= 1 && day <= 28)
                dDay = day;
            else
                dDay = 0;
        }
        else if(isLeap)
        {
            if(day >= 1 && day <= 29)
                dDay = day;
            else
                dDay = 0;
        }
    }
    else
        dDay = 0;
}
