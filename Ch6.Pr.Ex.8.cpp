#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double mean5(double X1, double X2, double X3, double X4, double X5);
double standardDeviation5(double X1, double X2, double X3, double X4, double X5);

int main ()
{
    double x1, x2, x3, x4, x5;
    double mean;
    double standard;

    cout << "Please enter five numbers: ";
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    cout << endl;

    cout << fixed << showpoint << setprecision (2);

    cout << "Mean: " << mean5 (x1, x2, x3, x4, x5) << endl;
    cout << "Standard Deviation: " << standardDeviation5 (x1, x2, x3, x4, x5) << endl;

    return 0;
}

double mean5(double X1, double X2, double X3, double X4, double X5)
{
    return (X1 + X2 + X3 + X4 + X5) / 5;

}

double standardDeviation5(double X1, double X2, double X3, double X4, double X5)
{
    double mean = mean5(X1, X2, X3, X4, X5);
    double standard = sqrt((pow(X1 - mean, 2) + pow(X2 - mean, 2) + pow(X3 - mean, 2) + pow(X4 - mean, 2) + pow(X5 - mean, 2)) / 5.0);

    return standard;
}
