#include <iostream>

using namespace std;

const double PI = 3.1416;

int main ()
{
    double radius;
    double area;
    double totalLength;

    cout << "Please enter the total length of a wire bent: ";
    cin >> totalLength;
    cout << endl;

    radius = totalLength/(2 * PI);
    area = PI * radius * radius;

    cout << "The radius and area of the circle " << radius << ", " << area;

    cout << endl;

    return 0;
}
