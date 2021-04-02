#include <iostream>

using namespace std;

int main ()
{
    double yardLength, radiusGrownTree, distanceBetween;
    int noOfTrees;
    double totalSpaceOccupied;

    cout << "Please enter the length of the yard (in meters): ";
    cin >> yardLength;
    cout << endl;

    cout << "Enter the radius of a fully grown tree (in meters): ";
    cin >> radiusGrownTree;
    cout << endl;

    cout << "Input required space between fully grown trees (in meters): ";
    cin >> distanceBetween;
    cout << endl;

    noOfTrees = yardLength / (2 * radiusGrownTree + distanceBetween);

    totalSpaceOccupied = noOfTrees * 2 * radiusGrownTree;

    cout << "The number of trees that can be planted in the yard: " << noOfTrees << endl;
    cout << "The total space that will be occupied by the fully grown trees: "
         << totalSpaceOccupied << " meters";
    cout << endl;

    return 0;
}
