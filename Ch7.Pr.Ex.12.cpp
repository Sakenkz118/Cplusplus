#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double MILE_TO_FOOTS = 5280;

void powerStationCost (double& width, double& distance, double& costWater, double& costLand, double& totalCost);

int main ()
{
    double riverWidth; // in miles
    double distanceDownstream; // in miles
    double costUnderWater; // per foot
    double costOverLand; // per foot
    double total = 0;

    cout << "Please enter the width of the river(in miles): ";
    cin >> riverWidth;
    cout << endl;

    cout << "Also enter the distance of the factory downstream " << endl;
    cout << "on the other side of the river(in miles): ";
    cin >> distanceDownstream;
    cout << endl;

    cout << "The cost of laying the power line under water($/ft.): ";
    cin >> costUnderWater;
    cout << endl;

    cout << "The cost of laying the power line over land($/ft.): ";
    cin >> costOverLand;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    powerStationCost(riverWidth, distanceDownstream, costUnderWater, costOverLand, total);
    cout << endl;

    cout << "Minimum cost: $" << total << endl;
    cout << "Under river length: " << riverWidth << " miles" << endl;
    cout << "Over land length: " << distanceDownstream << " miles" << endl;

    return 0;
}

void powerStationCost (double& width, double& distance, double& costWater, double& costLand, double& totalCost)
{
    double minCost;
    double increment = 0;
    double x, y;
    double xMin, yMin;

    x = width;

    totalCost = MILE_TO_FOOTS * (costWater * width + costLand * distance);
    minCost = totalCost;

    while (x > 0)
    {
        increment = increment + 0.1;
        x = distance - increment;
        y = sqrt(pow(increment, 2) + pow(width, 2));
        totalCost = MILE_TO_FOOTS * (costWater * y + costLand * (distance - increment));
        if (totalCost < minCost)
            {
            minCost = totalCost;
            xMin = x;
            yMin = y;
            }
        cout << "Total Cost: " << totalCost << ", River length = " << y << ", Land length = " << x << endl;
    }
    totalCost = minCost;
    distance = xMin;
    width = yMin;
}
