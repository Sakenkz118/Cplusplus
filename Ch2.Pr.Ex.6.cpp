#include <iostream>

using namespace std;

main ()
{
    double number2convert;
    int roundedNumber;

    cout << "Please enter decimal number that you want to convert to the nearest integer:";
    cin >> number2convert;
    cout << endl;

    roundedNumber = static_cast<int>(number2convert);

    cout << "The result is " << roundedNumber;

    return 0;
}
