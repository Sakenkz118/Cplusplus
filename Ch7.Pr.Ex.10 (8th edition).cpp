#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 22/7;
const int MINUTES_DAY = 1440;

void input(double& oil_rate, double& thickness, int& days);
void calculate(double oil_rate, double thickness, int days);

int main()
{
    double rate, thick;
    int d;

    input(rate, thick, d);
    calculate(rate, thick, d);

    return 0;
}

void input(double& oil_rate, double& thickness, int& days)
{
    cout << "Please enter the rate at which ";
    cout << "the ruptured pipe pumps oil (in gallons) per minute: ";
    cin >> oil_rate;
    cout << endl;

    cout << "Thickness in meters: ";
    cin >> thickness;
    cout << endl;

    cout << "Days disaster last(ed): ";
    cin >> days;
    cout << endl;
}

void calculate(double oil_rate, double thickness, int days)
{
    double spilled_area; // in sq.km
    double volume_oil; // in gallons

    cout << fixed << showpoint << setprecision(2);

    for(int i = 1; i <= days; i++)
    {
        volume_oil = MINUTES_DAY * i * oil_rate;
        spilled_area = volume_oil / (264 * thickness);
        cout << "Day " << i << ": " << endl;
        cout << "The spilled area (in sq. meters): " << spilled_area << endl;
        cout << "The spilled area (radius kilometers): " << sqrt(spilled_area / PI) / 1000 << endl;
        cout << "The volume of oil (in gallons) on top of the water: " << volume_oil << endl;
    }
}
