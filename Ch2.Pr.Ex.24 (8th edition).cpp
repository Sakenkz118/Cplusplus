#include <iostream>

using namespace std;

int main ()
{
    double length;
    double width;
    double totalLength;

    cout << "Please enter the total length of a wire bent: ";
    cin >> totalLength;
    cout << endl;

    width = totalLength / 5.0;

    length = 1.5 * width;

    cout << "The length and width of the picture frame are " << length << ", " << width;

    cout << endl;

    return 0;
}
