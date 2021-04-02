#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.1492;

int main ()
{
    double radius, height, volume; // cylinder parameters
    double length; // cube side length

    cout << "Please enter the radius of the base and \n"
         << "the height of a cylindrical container: ";
    cin >> radius >> height;
    cout << endl;

    volume = height * PI * pow(radius, 2);
    length = pow(volume, 0.3333);

    cout << fixed << showpoint << setprecision(2);

    cout << "The side of the cube with "
         << "the same volume as the cylindrical container: ";
    cout << length;

    return 0;
}
