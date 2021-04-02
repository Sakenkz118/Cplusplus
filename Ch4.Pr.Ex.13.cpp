#include <iostream>

using namespace std;

int main ()
{
    double paperLength, paperWidth;
    double topMargin, bottomMargin, leftMargin, rightMargin;
    double pointSizeLine;
    char line_space;
    int noOfCharactersLine, noOfLines;

    cout << "Enter paper size in inches (length, width): ";
    cin >> paperLength >> paperWidth;
    cout << endl;

    cout << "Enter margins, in inches (top, bottom, left, right): ";
    cin >> topMargin >> bottomMargin >> leftMargin >> rightMargin;
    cout << endl;

    cout << "Enter the point size of a line: ";
    cin >> pointSizeLine;
    cout << endl;

    cout << "Type of line space (s or S-single, d or D-double): ";
    cin >> line_space;
    cout << endl;

    switch(line_space)
{         case 's':
          case 'S':
            noOfLines = static_cast<int>((paperLength - (topMargin + bottomMargin)) / (2 * (pointSizeLine / 72.0)));
            break;
          case 'd':
          case 'D':
             noOfLines = static_cast<int>((paperLength - (topMargin + bottomMargin)) / (3 * (pointSizeLine / 72.0)));
             break;
        default:
        cout << "Incorrect space value!" << endl;
}

    noOfCharactersLine = static_cast<int>((paperWidth - (leftMargin + rightMargin)) / (pointSizeLine / 72.0));

    cout << "The number of lines: " << noOfLines << endl;
    cout << "The number of characters in a line: " << noOfCharactersLine << endl;

    return 0;
}

