#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double x1, x2, y1, y2, slope, coefficient;

    cout << "Please enter coordinates of the 1st point: ";
    cin >> x1 >> y1;
    cout << endl;

    cout << "Please enter coordinates of the 2nd point: ";
    cin >> x2 >> y2;
    cout << endl;

    cout << "1st point coordinates are (" << x1 << ", " << y1 << ")." << endl;
    cout << "2nd point coordinates are (" << x2 << ", " << y2 << ")." << endl;
    cout << endl;

    if (x1 == x2)
        cout << "Line l is vertical." << endl;
    else if (y1 == y2)
        cout << "Line l is horizontal." << endl;
    else if (x1 != x2)
        {
            slope = (y2 - y1) / (x2 - x1);

            if (slope > 0)
                cout << "Line l is increasing." << endl;
            else if (slope < 0)
                cout << "Line l is decreasing." << endl;

            coefficient = slope * x2 - y2;

            if (coefficient == 0)
            cout << "Equation of l line is y = " << slope << " * x " << endl;
            else if (coefficient != 0)
            if (coefficient > 0)
                cout << "Equation of l line is y = " << slope << " * x - " << coefficient << endl;
            else if (coefficient < 0)
                cout << "Equation of l line is y = " << slope << " * x - " << abs(coefficient) << endl;
        }

    return 0;
}

