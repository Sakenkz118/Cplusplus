#include <iostream>
#include <cmath>

using namespace std;

void getInput(double& speed, double& temperature);
double WindchillFactor(double windVelocity, double temp);

int main ()
{
    double windspeed; // in MPH
    double temperatureF; // in Fahrenheit

    getInput(windspeed, temperatureF);

    cout << "Windchill factor: " << WindchillFactor(windspeed, temperatureF) << endl;

    return 0;
}

void getInput(double& speed, double& temperature)
{
    cout << "Please enter wind speed in miles per hour: ";
    cin >> speed;
    cout << endl;

    cout << "Enter also temperature in Fahrenheit: ";
    cin >> temperature;
    cout << endl;
}

double WindchillFactor(double windVelocity, double temp)
{
    return 35.74 + 0.6215 * temp - 35.75 * pow(windVelocity, 0.16) + 0.4275 * temp * pow(windVelocity, 0.16);
}
