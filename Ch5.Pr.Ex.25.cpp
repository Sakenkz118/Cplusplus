#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.1492;

int main ()
{
    double r, R;
    double x = 0, remSec = 0;
    double V, maxV = 0, h, C;

    cout << "Please enter the radius of the circular waxed paper: ";
    cin >> R; // in inches
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    C = 2 * PI * R;

    while (x < C)
    {
        r = R - x / (2 * PI);
        h = sqrt((R * R) - (r * r));
        V = (1.0 / 3.0) * PI * (r * r) * h;

        if (V > maxV)
        {
            maxV = V;
            remSec = x;
        }
        x = x + 0.01;
    }

    cout << "The resulting cup is of maximum volume when the length of the removed sector is " << remSec << endl;
    cout << "The maximum volume of a cone cup is " << maxV << endl;

    return 0;
}
