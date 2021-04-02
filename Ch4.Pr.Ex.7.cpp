#include <iostream>

using namespace std;

int main ()
{
    // Variable declarations
    double x, y;

    // Prompt user for inputs
    cout << "Please enter the x-y coordinate of a point in a Cartesian plane: ";
    // Read values
    cin >> x >> y;
    cout << endl;

    // Echo inputs
    cout << "Entered values are (" << x << ", ";
    cout << y << ")" << endl;
    cout << endl;

    if (x == 0 && y == 0)
        cout << "(" << x << ", " << y << ") is the origin." << endl;
    else if (x != 0 && y == 0)
        cout << "(" << x << ", " << y << ") is on the x-axis." << endl;
        else if (x == 0 && y != 0)
        cout << "(" << x << ", " << y << ") is on the y-axis." << endl;
    else if (x != 0 && y != 0)
    {
        if (x > 0 && y > 0)
            cout << "(" << x << ", " << y << ") is in the first quadrant." << endl;
            else if (x > 0 && y < 0)
            cout << "(" << x << ", " << y << ") is in the fourth quadrant." << endl;
            if (x < 0 && y > 0)
                cout << "(" << x << ", " << y << ") is in the second quadrant." << endl;
            else if (x < 0 && y < 0)
                cout << "(" << x << ", " << y << ") is in the third quadrant." << endl;
    }
    return 0;
}
