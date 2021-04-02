#include <iostream>
#include "orderedArrayListType.h"

using namespace std;

int main()

{
    orderedArrayListType intList(25); //Line 6
    int number; //Line 7
    int index;
    int l, i;
    int n;

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
/*
    cout << "Enter a number for searching: ";
    cin >> number;
    cout << intList.seqSearch(number);
    cout << endl;

    cout << "Enter a position for replacement: ";
    cin >> l;
    cout << endl;

    cout << "Enter a value to replace: ";
    cin >> i;
    cout << endl;

    intList.replaceAt(l, i);

    cout << "After replacement: intList: "; //Line 15
    intList.print(); //Line 16
    cout << endl; //Line 17
*/

    cout << "Enter a number to insert to a list: ";
    cin >> n;
    intList.insert(n);
    cout << endl;

    cout << "After action: intList: "; //Line 15
    intList.print(); //Line 16
    cout << endl; //Line 17

    return 0;
}
