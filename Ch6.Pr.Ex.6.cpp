#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.1416;

double radius(double, double, double, double);
double circumference(double);
double area(double);

int main ()
{
    double x1, y1;
    double x2, y2;

    cout << "Please enter Cartesian coordinates of a circle center: ";
    cin >> x1 >> y1;
    cout << endl;

    cout << "Please enter coordinates of a point on this circle: ";
    cin >> x2 >> y2;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    cout << "Circle radius: " << radius(x1, y1, x2, y2) << endl;
    cout << "Circle diameter: " << 2 * radius(x1, y1, x2, y2) << endl;
    cout << "Circumference: " << circumference(radius(x1, y1, x2, y2)) << endl;
    cout << "Circle area: " << area(radius(x1, y1, x2, y2)) << endl;

    return 0;
}

double radius(double X1, double Y1, double X2, double Y2)
{
    return sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
}

double circumference(double r)
{
    return 2 * PI * r;
}

double area(double r)
{
    return PI * r * r;
}
