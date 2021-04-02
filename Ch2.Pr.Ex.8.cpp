#include <iostream>

using namespace std;

main ()
{
    double length, width, area, perimeter;

    cout << "Please enter the length and width of a rectangle: ";

    cin >> length >> width;

    cout << endl;

    area =  length * width;
    perimeter = 2 * (length + width);

    cout << "The rectangle area is equal to " << area << endl;
    cout << "The rectangle perimeter is equal to " << perimeter << endl;

    return 0;
}
