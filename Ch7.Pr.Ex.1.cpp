#include <iostream>

using namespace std;

void initialize(int&, int&, char&);
void getHoursRate(double&, double&);
double payCheck(double, double);
void printCheck(double, double, double);
void funcOne(int&, int);
void nextChar(char&);

int main ()
{
    int x, y;
    char z;
    double rate, hours;
    double amount;

    initialize(x, y, z);
    x = 1;
    y = 3;

    getHoursRate(hours, rate);
    cout << "Total payment: " << payCheck(hours, rate) << endl;

    printCheck(hours, rate, payCheck(hours, rate));
    cout << endl;

    funcOne(x, y);

    nextChar(z);

    return 0;
}

void initialize(int& X, int& Y, char& Z)
{
    X = 0;
    Y = 0;
    Z = ' ';
}

void getHoursRate(double& HOURS, double& RATE)
{
    cout << "Please enter amount of hours worked: ";
    cin >> HOURS;
    cout << endl;

    cout << "Also enter the rate per hour: ";
    cin >> RATE;
    cout << endl;
}

double payCheck(double Hours, double Rate)
{
    double paycheck;

    if (Hours <= 40)
    {
        paycheck = Hours * Rate;
        return paycheck;
    }
    else
    {
        paycheck = Rate * (40 + (Hours - 40) * 1.5);
        return paycheck;
    }
}

void printCheck(double Hours, double Rate, double paycheck)
{
    cout << "Hours Worked: " << Hours << endl;
    cout << "Hourly rate: " << Rate << endl;
    cout << "Payment paid: " << paycheck << endl;
}

void funcOne(int& X, int Y)
{
    int num;

    cout << "Please enter a number: ";
    cin >> num;
    cout << endl;

    X = 2 * X + Y - num;
}

void nextChar(char& new_z)
{
    new_z = new_z + 1;
}
