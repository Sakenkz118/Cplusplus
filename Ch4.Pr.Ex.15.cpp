#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double pictureLength, pictureWidth; // in inches
    double pictureArea, framePerimeter;
    char frameType;
    char colourChoice;
    int crowns;
    double totalCost;

    cout << "Please enter the length and width (in inches) of a picture: ";
    cin >> pictureLength >> pictureWidth;
    cout << endl;

    pictureArea = pictureLength * pictureWidth;
    framePerimeter = 2 * (pictureWidth + pictureLength + 2);

    cout << "The type of a frame (r, R or f, F): ";
    cin >> frameType;
    cout << endl;

    cout << "The colour of a frame is white? (y or n): ";
    cin >> colourChoice;
    cout << endl;

    if (colourChoice != 'y' && colourChoice != 'n')
    cout << "Invalid colour choice!" << endl;

    cout << "The number of crowns: ";
    cin >> crowns;
    cout << endl;

    if (crowns > 4 || crowns < 0)
    cout << "The crowns cannot be more than 4 and negative!" << endl;

    switch (frameType)
    {
    case 'r':
    case 'R':
        if (colourChoice == 'y')
        totalCost = 0.15 * framePerimeter + pictureArea * (0.02 + 0.07) + crowns * 0.35;
        else if (colourChoice == 'n')
        totalCost = (0.15 + 0.10) * framePerimeter + pictureArea * (0.02 + 0.07) + crowns * 0.35;
        break;
    case 'f':
    case 'F':
        if (colourChoice == 'y')
        totalCost = 0.25 * framePerimeter + pictureArea * (0.02 + 0.07) + crowns * 0.35;
        else if (colourChoice == 'n')
        totalCost = (0.25 + 0.10) * framePerimeter + pictureArea * (0.02 + 0.07) + crowns * 0.35;
        break;

    default:
        cout << "Invalid frame type entered!" << endl;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "The total cost: $" << totalCost << endl;

    return 0;
}

