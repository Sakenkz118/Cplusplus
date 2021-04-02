#include <iostream>
#include "clockType.h"

using namespace std;

class extClockType: public clockType
{
public:
    void setTimeZone(int z);
    // Function to set time zone according to formal parameter passed
    // Postcondition: time zone is set to as timeZone = z;

    int getTimeZone() const;
    // Function to retrieve time zone
    // Postcondition: time zone is returned

    bool equalTimeZone(const extClockType &otherExtClock) const;
    // Function to compare time zones
    // Postcondition: result of comparison is returned

    void print() const;
    // Function to print time zone
    // Postcondition: time zone is printed on display

    void incrementTimeZone();
    // Function to increment time zone values
    // Postcondition: time zone is incremented by +1

    void decrementTimeZone();
    // Function to increment time zone values
    // Postcondition: time zone is incremented by -1

    bool eqTime(const extClockType &otherExtClock) const;

    extClockType(); // default constructor
    extClockType(int h, int m, int s, int z); // constructor with parameters
private:
    int timeZone;
};

int main()
{
    extClockType myClock(10, 57, 45, 4), yourClock(10, 57, 45, 4);
    yourClock.print();

    cout << "Both time times are equal?: " << myClock.eqTime(yourClock);
    cout << endl;

    return 0;
}

void extClockType::setTimeZone(int z)
{
    if(z >= -12 && z <= 12)
        timeZone = z;
    else
        timeZone = 0;
}

int extClockType::getTimeZone() const
{
    return timeZone;
}

bool extClockType::equalTimeZone(const extClockType &otherExtClock) const
{
    return (timeZone == otherExtClock.timeZone);
}

extClockType::extClockType()
{
    clockType::setTime(0, 0, 0);
    timeZone = 0;
}

extClockType::extClockType(int h, int m, int s, int z)
{
    clockType::setTime(h, m, s);
    timeZone = z;
}

void extClockType::print() const
{
    printTime();
    cout << endl;
    cout << "Time zone: " << timeZone << endl;
}

bool extClockType::eqTime(const extClockType &otherExtClock) const
{
    int h, m, s;
    int h1, m1, s1;

    getTime(h, m, s);
    otherExtClock.getTime(h1, m1, s1);

    return ((h == h1 && m == m1 && s == s1)&& (timeZone == otherExtClock.timeZone));
}

void extClockType::incrementTimeZone()
{
    timeZone++;
}

void extClockType::decrementTimeZone()
{
    timeZone--;
}
