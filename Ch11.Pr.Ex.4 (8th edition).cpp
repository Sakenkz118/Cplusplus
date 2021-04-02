#include <iostream>
#include "cylinderType.h"
#include <iomanip>

using namespace std;

const double ONE_CUBIC_FEET_IN_LITERS = 28.32; // 1 cubic feet is 28.32 liters

void getHeight(double &h);
void getBaseRad(double &r);
void getCostVolume(double &costV);
void getCostPaint(double &costP);
void totalCostVolume(cylinderType &cont, double &costV);
void totalCostPaint(cylinderType &cont, double &costP);

int main()
{
    double height;        // cylinder height in feet
    double baseRadius;    // cylinder's base radius in feet
    double costPerLitre;  // shipping cost per liter
    double costPerSqFt;   // cost per square foot
    cylinderType container; // container object of cylindrical shape

    getHeight(height);
    getBaseRad(baseRadius);
    getCostVolume(costPerLitre);
    getCostPaint(costPerSqFt);

    container.setBaseRadius(baseRadius);
    container.setHeight(height);

    cout << fixed << showpoint << setprecision(2);
    totalCostVolume(container, costPerLitre);
    totalCostPaint(container, costPerSqFt);

    return 0;
}

void getHeight(double &h)
{
    cout << "Please enter height of a container(in feet): ";
    cin >> h;
    cout << endl;
}

void getBaseRad(double &r)
{
    cout << "Please enter radius of a container base(in feet): ";
    cin >> r;
    cout << endl;
}

void getCostVolume(double &costV)
{
    cout << "Please enter shipping cost ($) per liter: ";
    cin >> costV;
    cout << endl;
}

void getCostPaint(double &costP)
{
    cout << "Please enter cost($) for painting container per square feet: ";
    cin >> costP;
    cout << endl;
}

void totalCostVolume(cylinderType &cont, double &costV)
{
    cout << "Total cost for shipping: $" << cont.cylinderVolume() * costV * ONE_CUBIC_FEET_IN_LITERS;
    cout << endl;
}

void totalCostPaint(cylinderType &cont, double &costP)
{
    cout << "Total cost for painting: $" << cont.cylinderSurfaceArea() * costP << endl;
}
