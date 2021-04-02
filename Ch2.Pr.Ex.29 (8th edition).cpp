#include <iostream>
#include <cmath>

using namespace std;

const double CUBIC_YARD = 27; // cubic feet

int main ()
{
    double premixed_concrete; // in cubic yards
    double thickness; // of the patio in inches
    double ratio; // of length and width
    double length, width; // of patio in feet
    double area; // sq. feet

    cout << "Please specify amount of ordered premixed concrete (in cubic yards): ";
    cin >> premixed_concrete;
    cout << endl;

    cout << "Enter the thickness of patio (in inches): ";
    cin >> thickness;
    cout << endl;

    cout << "Enter the ratio of length of width: ";
    cin >> ratio;
    cout << endl;

    area = (premixed_concrete * CUBIC_YARD) / (thickness / 12);
    length = sqrt (area * ratio);
    width = length / ratio;

    cout << "The length of the patio (in feet): " << length << " feet (foot)";
    cout << endl;
    cout << "The width of the patio (in feet): " << width << " feet (foot)";
    cout << endl;

    return 0;
}
