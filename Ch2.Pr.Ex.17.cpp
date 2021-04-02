#include <iostream>

using namespace std;

const double CENTIMETERS_IN_INCH = 2.54;
const int INCHES_IN_FEET = 12;
const int FEET_IN_YARD = 3;

int main ()
{

    int centimeters;
    int inches;
    int feet;
    int yards;

    cout << "Please enter a length expressed in centimeters: ";
    cin >> centimeters;

    inches = centimeters / CENTIMETERS_IN_INCH; // total length in inches to the whole point

    yards = inches / (FEET_IN_YARD * INCHES_IN_FEET); // whole yards value
    inches = inches % (FEET_IN_YARD * INCHES_IN_FEET); // remainder after yards subtracted

    feet = inches / INCHES_IN_FEET; // whole feet value
    inches = inches % INCHES_IN_FEET; // remainder after yards & feet subtracted

    cout << "yard(s) = " << yards

    << ", feet (foot) = " << feet

    << ", inch(es) = " << inches << endl;

    return 0;
}

