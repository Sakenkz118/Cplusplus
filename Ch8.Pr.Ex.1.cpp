#include <iostream>

using namespace std;

enum triangleType {scalene, isosceles, equilateral, noTriangle};

void triangleShape (double a, double b, double c);

int main ()
{
    double side1, side2, side3;

    cout << "Please enter the length of 3 sides of a triangle: ";
    cin >> side1 >> side2 >> side3;
    cout << endl;

    cout << "The shape of a triangle: ";
    triangleShape (side1, side2, side3);

    return 0;
}

void triangleShape (double a, double b, double c)
{

    triangleType s;

    if (((a + b) <= c) || ((b + c) <= a) || ((a + c) <= b))
        s = noTriangle;
    else
        {
            if ((a != b) && (b != c) && (a != c))
            s = scalene;
            else if (((a == b) && (b != c)) || ((a == c) && (b != c)) || ((b == c) && (b != a)))
            s = isosceles;
            else if ((a == b) && (b == c) && (a == c))
            s = equilateral;
        }

    switch(s)
    {
        case equilateral:
            cout << "Equilateral." << endl;
        break;

        case scalene:
            cout << "Scalene." << endl;
        break;

        case isosceles:
            cout << "Isosceles." << endl;
        break;

        case noTriangle:
            cout << "It is NOT a triangle." << endl;
        break;

    }
}
