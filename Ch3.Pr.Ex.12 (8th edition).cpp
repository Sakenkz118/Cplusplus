#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    double avgSpeedA, avgSpeedB, hours, minutes;
    double shortestDistance, distanceA, distanceB;

    cout << "Please enter the average velocity of Car A (MPH):";
    cin >> avgSpeedA;
    cout << endl;

    cout << "Please enter the average velocity of Car B (MPH):";
    cin >> avgSpeedB;
    cout << endl;

    cout << "Enter time in hours and minutes: ";
    cin >> hours >> minutes;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    distanceA = avgSpeedA * (hours + minutes/ 60);
    distanceB = avgSpeedB * (hours + minutes/ 60);

    shortestDistance = sqrt (pow (distanceA, 2) + pow (distanceB, 2));

    cout << "The shortest distance is " << shortestDistance << " miles";
    cout << endl;

    return 0;
}
