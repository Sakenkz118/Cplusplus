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

    int setDay(int day);
    // Function to set the day.
    // Postcondition: day is set as dDay = day.

    int getMonth() const;
    // Function to return the month.
    // Postcondition: The value of dMonth is returned.

    int setMonth(int month);
    // Function to set the month.
    // Postcondition: month is set as dMonth = month.

    int getYear() const;
    // Function to return the year.
    // Postcondition: The value of dYear is returned.

    int setYear(int year);
    // Function to set the year.
    // Postcondition: day is set as dYear = year.

    void printDate() const;
    // Function to output the date in the form mm-dd-yyyy.

    dateType(int month = 1, int day = 1, int year = 1900);
    // Constructor to set the date.
    // The member variables dMonth, dDay, and dYear are set.
    // according to the parameters.
    // Postcondition: dMonth = month; dDay = day; dYear = year;
    // If no values are specified, the default
    // values are used to initialize the member variables.

    bool isLeapYear(int);
    // Function to check for leap year
    // Postcondition: boolean expression is returned, 0(false) or 1(true).

    int noOfDays();
    // Function to return the number of days in the month.
    // Postcondition: number of days in the month is returned.

    int dayYear();
    // Function to return the number of days passed in the year.
    // Postcondition: number of days passed in the year is returned.

    int dayLeftYear();
    // Function to return the number of days remaining in the year.
    // Postcondition: umber of days remaining in the year is returned.

    void statusLeap(int);
    // Function to check for leap year and print the status
    // Postcondition: boolean expression is returned, 0(false) or 1(true).

    void calculateNewDate(int);
    // Function to calculate the new date by adding a fixed number of days to the date.
    // Postcondition: new date is returned

private:
    int dMonth; //variable to store the month
    int dDay; //variable to store the day
    int dYear; //variable to store the year
    bool isLeap; // variable to store leap year status
};

int main()
{
    dateType myDate(0, 0, 0);
    myDate.setYear(2020);
    myDate.setMonth(1);
    myDate.setDay(18);
    myDate.printDate();
    cout << endl;
    cout << myDate.dayLeftYear();
    cout << endl;
    myDate.calculateNewDate(730);

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
    else if (dMonth == 1 || dMonth == 3 || dMonth == 5 || dMonth == 7 ||
             dMonth == 8 || dMonth == 10 || dMonth == 12) // months with always 31 days
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

int dateType::setDay(int day)
{
    isLeap = isLeapYear(dYear);

    if(dMonth == 4 || dMonth == 6 || dMonth == 9 || dMonth == 11) // months with always 30 days
    {
        if(day >= 1 && day <= 30)
            dDay = day;
        else
            dDay = 0;
    }
    else if (dMonth == 1 || dMonth == 3 || dMonth == 5 || dMonth == 7 ||
             dMonth == 8 || dMonth == 10 || dMonth == 12) // months with always 31 days
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

int dateType::setMonth(int month)
{
    if(month >= 1 && month <= 12)
        dMonth = month;
    else
        dMonth = 0;
}

int dateType::setYear(int year)
{
    if(year > 0)
        dYear = year;
    else
        dYear = 0;
}

int dateType::noOfDays()
{
    switch(dMonth)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 2:
            {
                if(isLeapYear(dYear) == 1)
                    return 29;
                else if(isLeapYear(dYear) == 0)
                    return 28;
            }
    }
}

int dateType::dayYear()
{
    int dayNumber = 0;

    if(isLeapYear(dYear) == 1)
    {
        switch(dMonth)
        {
        case 1:
            dayNumber = dDay;
            break;
        case 2:
            dayNumber = 31 + dDay;
            break;
        case 3:
            dayNumber = 60 + dDay;
            break;
        case 4:
            dayNumber = 91 + dDay;
            break;
        case 5:
            dayNumber = 121 + dDay;
            break;
        case 6:
            dayNumber = 152 + dDay;
            break;
        case 7:
            dayNumber = 182 + dDay;
            break;
        case 8:
            dayNumber = 213 + dDay;
            break;
        case 9:
            dayNumber = 244 + dDay;;
            break;
        case 10:
            dayNumber = 274 + dDay;
            break;
        case 11:
            dayNumber = 305 + dDay;
            break;
        case 12:
            dayNumber = 335 + dDay;
            break;
        }
    }
    else if (isLeapYear(dYear) == 0)
    {
        switch(dMonth)
        {
        case 1:
            dayNumber = dDay;
            break;
        case 2:
            dayNumber = 31 + dDay;
            break;
        case 3:
            dayNumber = 59 + dDay;
            break;
        case 4:
            dayNumber = 90 + dDay;
            break;
        case 5:
            dayNumber = 120 + dDay;
            break;
        case 6:
            dayNumber = 151 + dDay;
            break;
        case 7:
            dayNumber = 181 + dDay;
            break;
        case 8:
            dayNumber = 212 + dDay;
            break;
        case 9:
            dayNumber = 243 + dDay;
            break;
        case 10:
            dayNumber = 273 + dDay;
            break;
        case 11:
            dayNumber = 304 + dDay;
            break;
        case 12:
            dayNumber = 334 + dDay;
            break;
        }
    }
    return dayNumber;
}

int dateType::dayLeftYear()
{
    if(isLeapYear(dYear) == true)
        return (366 - dayYear());
    else if(isLeapYear(dYear) == false)
        return (365 - dayYear());
}

void dateType::statusLeap(int year)
{
    if(isLeapYear(year) == true)
        cout << year << " is a leap year." << endl;
    else if(isLeapYear(year) == false)
        cout << year << " is NOT a leap year." << endl;
}

void dateType::calculateNewDate(int addDay)
{
    int newDayNumber;
    int currentDayNumber;
    int newDay, newMonth, newYear;

    currentDayNumber = dayYear();

    addDay = abs(addDay);

    newDayNumber = currentDayNumber + addDay;

    if(isLeapYear(dYear) == 1)
    {
        if(newDayNumber <= 31)
        {
            newMonth = 1;
            newDay = newDayNumber;
        }
        else if((newDayNumber > 31) && (newDayNumber <= 60))
        {
            newMonth = 2;
            newDay = newDayNumber - 31;
        }
        else if((newDayNumber > 60) && (newDayNumber <= 91))
        {
            newMonth = 3;
            newDay = newDayNumber - 60;
        }
        else if((newDayNumber > 91) && (newDayNumber <= 121))
        {
            newMonth = 4;
            newDay = newDayNumber - 91;
        }
        else if((newDayNumber > 121) && (newDayNumber <= 152))
        {
            newMonth = 5;
            newDay = newDayNumber - 121;
        }
        else if((newDayNumber > 152) && (newDayNumber <= 182))
        {
            newMonth = 6;
            newDay = newDayNumber - 152;
        }
        else if((newDayNumber > 182) && (newDayNumber <= 213))
        {
            newMonth = 7;
            newDay = newDayNumber - 182;
        }
        else if((newDayNumber > 213) && (newDayNumber <= 244))
        {
            newMonth = 8;
            newDay = newDayNumber - 213;
        }
        else if((newDayNumber > 244) && (newDayNumber <= 274))
        {
            newMonth = 9;
            newDay = newDayNumber - 244;
        }
        else if((newDayNumber > 274) && (newDayNumber <= 305))
        {
            newMonth = 10;
            newDay = newDayNumber - 274;
        }
        else if((newDayNumber > 305) && (newDayNumber <= 335))
        {
            newMonth = 11;
            newDay = newDayNumber - 305;
        }
        else if((newDayNumber > 335) && (newDayNumber <= 366))
        {
            newMonth = 12;
            newDay = newDayNumber - 335;
        }
        else if(newDayNumber > 366)
        {
            int i = 0;
            i = newDayNumber / 365;

            dYear = dYear + newDayNumber / 365;

            while(i >= 0)
            {
                if(i / 4)
                    newDayNumber--;
                i = i - 4;
            }
            newDayNumber = newDayNumber % 365;
        if(newDayNumber <= 31)
        {
            newMonth = 1;
            newDay = newDayNumber;
        }
        else if((newDayNumber > 31) && (newDayNumber <= 60))
        {
            newMonth = 2;
            newDay = newDayNumber - 31;
        }
        else if((newDayNumber > 60) && (newDayNumber <= 91))
        {
            newMonth = 3;
            newDay = newDayNumber - 60;
        }
        else if((newDayNumber > 91) && (newDayNumber <= 121))
        {
            newMonth = 4;
            newDay = newDayNumber - 91;
        }
        else if((newDayNumber > 121) && (newDayNumber <= 152))
        {
            newMonth = 5;
            newDay = newDayNumber - 121;
        }
        else if((newDayNumber > 152) && (newDayNumber <= 182))
        {
            newMonth = 6;
            newDay = newDayNumber - 152;
        }
        else if((newDayNumber > 182) && (newDayNumber <= 213))
        {
            newMonth = 7;
            newDay = newDayNumber - 182;
        }
        else if((newDayNumber > 213) && (newDayNumber <= 244))
        {
            newMonth = 8;
            newDay = newDayNumber - 213;
        }
        else if((newDayNumber > 244) && (newDayNumber <= 274))
        {
            newMonth = 9;
            newDay = newDayNumber - 244;
        }
        else if((newDayNumber > 274) && (newDayNumber <= 305))
        {
            newMonth = 10;
            newDay = newDayNumber - 274;
        }
        else if((newDayNumber > 305) && (newDayNumber <= 335))
        {
            newMonth = 11;
            newDay = newDayNumber - 305;
        }
        else if((newDayNumber > 335) && (newDayNumber <= 366))
        {
            newMonth = 12;
            newDay = newDayNumber - 335;
        }
        }
    }
    else if(isLeapYear(dYear) == 0)
    {
        if(newDayNumber <= 31)
        {
            newMonth = 1;
            newDay = newDayNumber;
        }
        else if((newDayNumber > 31) && (newDayNumber <= 59))
        {
            newMonth = 2;
            newDay = newDayNumber - 31;
        }
        else if((newDayNumber > 59) && (newDayNumber <= 90))
        {
            newMonth = 3;
            newDay = newDayNumber - 59;
        }
        else if((newDayNumber > 90) && (newDayNumber <= 120))
        {
            newMonth = 4;
            newDay = newDayNumber - 90;
        }
        else if((newDayNumber > 120) && (newDayNumber <= 151))
        {
            newMonth = 5;
            newDay = newDayNumber - 120;
        }
        else if((newDayNumber > 151) && (newDayNumber <= 181))
        {
            newMonth = 6;
            newDay = newDayNumber - 151;
        }
        else if((newDayNumber > 181) && (newDayNumber <= 212))
        {
            newMonth = 7;
            newDay = newDayNumber - 181;
        }
        else if((newDayNumber > 212) && (newDayNumber <= 243))
        {
            newMonth = 8;
            newDay = newDayNumber - 212;
        }
        else if((newDayNumber > 243) && (newDayNumber <= 273))
        {
            newMonth = 9;
            newDay = newDayNumber - 243;
        }
        else if((newDayNumber > 273) && (newDayNumber <= 304))
        {
            newMonth = 10;
            newDay = newDayNumber - 273;
        }
        else if((newDayNumber > 304) && (newDayNumber <= 334))
        {
            newMonth = 11;
            newDay = newDayNumber - 304;
        }
        else if((newDayNumber > 334) && (newDayNumber <= 365))
        {
            newMonth = 12;
            newDay = newDayNumber - 334;
        }
        else if(newDayNumber > 365)
        {
            dYear = dYear + newDayNumber / 365;
            newDayNumber = newDayNumber % 365;
        if(newDayNumber <= 31)
        {
            newMonth = 1;
            newDay = newDayNumber;
        }
        else if((newDayNumber > 31) && (newDayNumber <= 59))
        {
            newMonth = 2;
            newDay = newDayNumber - 31;
        }
        else if((newDayNumber > 59) && (newDayNumber <= 90))
        {
            newMonth = 3;
            newDay = newDayNumber - 59;
        }
        else if((newDayNumber > 90) && (newDayNumber <= 120))
        {
            newMonth = 4;
            newDay = newDayNumber - 90;
        }
        else if((newDayNumber > 120) && (newDayNumber <= 151))
        {
            newMonth = 5;
            newDay = newDayNumber - 120;
        }
        else if((newDayNumber > 151) && (newDayNumber <= 181))
        {
            newMonth = 6;
            newDay = newDayNumber - 151;
        }
        else if((newDayNumber > 181) && (newDayNumber <= 212))
        {
            newMonth = 7;
            newDay = newDayNumber - 181;
        }
        else if((newDayNumber > 212) && (newDayNumber <= 243))
        {
            newMonth = 8;
            newDay = newDayNumber - 212;
        }
        else if((newDayNumber > 243) && (newDayNumber <= 273))
        {
            newMonth = 9;
            newDay = newDayNumber - 243;
        }
        else if((newDayNumber > 273) && (newDayNumber <= 304))
        {
            newMonth = 10;
            newDay = newDayNumber - 273;
        }
        else if((newDayNumber > 304) && (newDayNumber <= 334))
        {
            newMonth = 11;
            newDay = newDayNumber - 304;
        }
        else if((newDayNumber > 334) && (newDayNumber <= 365))
        {
            newMonth = 12;
            newDay = newDayNumber - 334;
        }

        }
    }

    printDate();
    cout << " + " << addDay << "days is ";
    cout << newMonth << "-" << newDay << "-" << dYear << endl;
}

