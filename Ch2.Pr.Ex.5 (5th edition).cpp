#include <iostream>

using namespace std;

int main()
{
    int length;
    int width;
    int area;
    int perimeter;

    cout << "Enter the length: ";
    cin >> length;
    cout << endl;

    cout << "Enter the width: ";
    cin >> width;
    cout << endl;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}
