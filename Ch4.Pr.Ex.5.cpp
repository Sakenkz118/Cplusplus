/*
The program outputs the number of boxes and the number of containers to ship the cookies.
Also outputs the number of leftover boxes and cookies.
*/

#include <iostream>

using namespace std;

int main ()
{
    // Variable declarations
    int totalNoCookies, noCookiesBox, noBoxContainer;
    int leftoverCookieBox, leftoverBoxContainer, leftoverCookies;
    int boxes, containers;

    // Prompt a user to enter values
    cout << "Enter the total number of cookies: ";
    cin >> totalNoCookies;
    cout << endl;

    cout << "Enter the number of cookies in a box: ";
    cin >> noCookiesBox;
    cout << endl;

    cout << "Enter the number of cookie boxes in a container: ";
    cin >> noBoxContainer;
    cout << endl;

    // Echo inputs
    cout << "INPUTS" << endl;
    cout << "Total number of cookies: " << totalNoCookies << endl;
    cout << "Number of cookies in a box: " << noCookiesBox << endl;
    cout << "Number of cookie boxes in a container: " << noBoxContainer << endl;
    cout << endl;

    cout << "RESULTS: " << endl;

    // Calculations
    boxes = totalNoCookies / noCookiesBox;
    leftoverCookies = totalNoCookies - boxes * noCookiesBox;
    containers = boxes / noBoxContainer;
    leftoverBoxContainer = boxes % noBoxContainer;
    leftoverCookies = totalNoCookies - containers * noBoxContainer * noCookiesBox;

    // Output results
    cout << "The number of boxes: " << boxes << endl;
    cout << "The number of containers to ship the cookies: " << containers << endl;
    cout << "The leftover cookies: " << leftoverCookies << endl;
    cout << "The leftover boxes: " << leftoverBoxContainer << endl;

    return 0;
}
