#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1419;

int main ()
{
    double r;

    cout << "The square root of PI: " << sqrt(PI) << endl;

    cout << "Please enter the radius of a sphere: ";
    cin >> r;
    cout << endl;

    cout << "The surface area of the sphere: " << 4 * PI * pow (r, 2) << endl;
    cout << "The volume of the sphere: " << (4.0 / 3.0) * PI * pow(r, 3) << endl;

    return 0;
}
