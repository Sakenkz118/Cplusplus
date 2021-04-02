#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double num = 0;

    cout << "Please enter a decimal number: ";
    cin >> num;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    cout << "Number entered rounded to 2 points: " << num;
    cout << endl;

    return 0;
}
