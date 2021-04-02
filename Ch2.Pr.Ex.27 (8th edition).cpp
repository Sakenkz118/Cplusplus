#include <iostream>

using namespace std;

int main ()
{
    double l_door, w_door; // the length and width of the door in feet
    double l_window1, w_window1; // the length and width of the first window in feet
    double l_window2, w_window2; // the length and width of the second window in feet
    double l_shelf, w_shelf; // the length and width of the bookshelf in feet
    double length, width, height; // the length, width, and height of the room in feet
    double total_area; // painted area
    double paint; // amount of paint needed
    double sq_feet_per_gallon; // in sq. feet

    // Prompt the user to enter parameters

    cout << "Please enter the total area(sq. feet) that could be painted with a gallon: ";
    cin >> sq_feet_per_gallon;
    cout << endl;

    cout << "Please enter the length and width of the door in feet: ";
    cin >> l_door >> w_door;
    cout << endl;

    cout << "Please enter the length and width of the first window in feet: ";
    cin >> l_window1 >> w_window1;
    cout << endl;

    cout << "Please enter the length and width of the second window in feet: ";
    cin >> l_window2 >> w_window2;
    cout << endl;

    cout << "Please enter the length and width of the bookshelf in feet: ";
    cin >> l_shelf >> w_shelf;
    cout << endl;

    cout << "Please enter the length, width, and height of the room in feet: ";
    cin >> length >> width >> height;
    cout << endl;

    // Echo the inputs entered
    cout << "The dimensions entered so far" << endl;
    cout << "------------------------------------" << endl;

    cout << "DOOR" << endl;
    cout << "Length = " << l_door << " feet (foot), Width = " << w_door << " feet (foot)" << endl;

    cout << "FIRST WINDOW" << endl;
    cout << "Length = " << l_window1 << " feet (foot), Width = " << w_window1 << " feet (foot)" << endl;

    cout << "SECOND WINDOW" << endl;
    cout << "Length = " << l_window2 << " feet (foot), Width = " << w_window2 << " feet (foot)" << endl;

    cout << "BOOKSHELF" << endl;
    cout << "Length = " << l_shelf << " feet (foot), Width = " << w_shelf << " feet (foot)" << endl;

    cout << "ROOM" << endl;
    cout << "Length = " << length << " feet (foot), Width = " << width << " feet (foot), Height = " << height << " feet (foot)" << endl;

    // Actual calculations
    total_area = 2 * ((length + width) * height) - (l_door * w_door + l_window1 * w_window1 + l_window2 * w_window2 + l_shelf * w_shelf);
    paint = total_area / sq_feet_per_gallon;

    cout << endl;

    cout << "The total area to be painted: " << total_area << " sq. feet" << endl;
    cout << "The amount of paint needed to paint the walls of the room: " << paint << " gallon(s)";
    cout << endl;

    return 0;
}
