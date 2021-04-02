/* This program prompts the user to input the value of
a (the coefficient of x2), b (the coefficient of x), and c (the constant term),
and outputs the type of roots of the equation
*/

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double a, b, c;
    double root1, root2;
    double discriminant;

    // Prompt for inputs
    cout << "Enter a value of a (the coefficient of x2): ";
    cin >> a;
    cout << endl;

    if (a ==0)
        cout << "Value of a coefficient cannot be zero." << endl;

    cout << "Enter a value of b (the coefficient of x): ";
    cin >> b;
    cout << endl;

    cout << "Enter a value of c (the constant term): ";
    cin >> c;
    cout << endl;

    // Echo inputs
    cout << "INPUTS" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << endl;

    // Calculations
    discriminant = pow (b, 2) - 4 * a * c;

    cout << "RESULTS" << endl;
    if (discriminant > 0)
    {
        cout << "The equation has two real roots." << endl;
        root1 = (-b + sqrt(discriminant)) / 2 * a;
        root2 = (-b - sqrt(discriminant)) / 2 * a;
        cout << "First real root:" << root1 << endl;
        cout << "Second real root:" << root2 << endl;
    }

    else if (discriminant < 0)
        cout << "The equation has two complex roots." << endl;
    else
    {
        cout << "The equation has a single (repeated) root." << endl;
        root1 = -b / 2 * a;
        root2 = -b / 2 * a;
        cout << "First real root:" << root1 << endl;
        cout << "Second real root:" << root2 << endl;
    }

    return 0;
}
