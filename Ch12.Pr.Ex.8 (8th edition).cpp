#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main()
{
    unorderedArrayListType intList(25); //Line 6
    int number; //Line 7
    int index;

    cout << "Line 8: Enter 8 integers: "; //Line 8
    for (int count = 0; count < 8; count++) //Line 9
    { //Line 10
        cin >> number; //Line 11
        intList.insertEnd(number); //Line 12
    } //Line 13
    cout << endl; //Line 14

    cout << "Line 15: intList: "; //Line 15
    intList.print(); //Line 16
    cout << endl; //Line 17

    cout << "Line 18: Enter the number to be deleted: "; //Line 18
    cin >> number; //Line 19
    cout << endl; //Line 20

    intList.removeAll(number);

    intList.print(); //Line 16

    cout << endl; //Line 17

    return 0;
}
