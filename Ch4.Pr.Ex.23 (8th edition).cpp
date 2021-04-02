#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    double diagonalLength = 0; // in inches
    char type;
    double length, width, area;

    cout << "Please enter the length of the diagonal (in inches) of the screen: ";
    cin >> diagonalLength;
    cout << endl;

    cout << "Define the type of TV (t or T - Traditional; l or L - LCD):";
    cin >> type;
    cout << endl;

    switch (type)
    {
    case 't':
    case 'T':
        length = 0.8 * diagonalLength;
        width = 0.6 * diagonalLength;
        area = length * width;

        cout << fixed << showpoint << setprecision(2);

        cout << "Length: " << length << " inche(s)" << endl;
        cout << "Width: " << width << " inche(s)" << endl;
        cout << "Area: " << area << " sq. inches" << endl;
        break;

    case 'l':
    case 'L':
        length = (16 * diagonalLength) / sqrt(337);
        width = (9 * diagonalLength) / sqrt(337);
        area = length * width;

        cout << fixed << showpoint << setprecision(2);

        cout << "Length: " << length << " inche(s)" << endl;
        cout << "Width: " << width << " inche(s)" << endl;
        cout << "Area: " << area << " sq. inches" << endl;
        break;

    default:
        cout << "Wrong type of TV entered!" << endl;
    }

    return 0;
}
