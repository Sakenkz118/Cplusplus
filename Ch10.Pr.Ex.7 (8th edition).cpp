#include <iostream>

using namespace std;

class dayType
{
public:
    void setDay(int index); //Set the day
    void print() const; //Print the day
    string Day(); //Return the day
    string prevDay(); //Return the previous day
    string nextDay(); //Return the next day
    string addDays(int add); //Calculate and return the day by adding certain days to the current day

    dayType();

private:
    string day; // variable to store the name of the week
    string dayOfWeek[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}; //full set
    int ind;
};

int main()
{
    dayType testDay;

    testDay.setDay(2);

//    cout << testDay.Day() << endl;
    testDay.print();

    testDay.addDays(6);
    testDay.print();
//    cout << testDay.prevDay() << endl;
//   cout << testDay.nextDay() << endl;

    return 0;
}

void dayType::setDay(int index)
{
    day = dayOfWeek[index - 1];
    ind = index;
}

void dayType::print() const
{
    cout << "Day: " << day << endl;
}

string dayType::Day()
{
    return day;
}

string dayType::prevDay()
{
    string previousDay;

    if((ind - 2) >= 0 && ((ind - 2) < 7))
        previousDay = dayOfWeek[ind - 2];
    else if((ind - 2) == -1)
        previousDay = "Sunday";

    return previousDay;
}

string dayType::nextDay()
{
    string dayNext;

    if(ind >= 0 && ind < 7)
        dayNext = dayOfWeek[ind];
    else if(ind == 7)
        dayNext = "Monday";

    return dayNext;
}

dayType::dayType()
{
    day = "";
    ind = 0;
}

string dayType::addDays(int add)
{
    if(ind + add > 7)
        ind = (ind + add) % 7;
    else
        ind = ind + add;

    day = dayOfWeek[ind - 1];
}
