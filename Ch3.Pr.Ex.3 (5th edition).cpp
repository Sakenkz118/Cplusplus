#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double weightKg = 0;
    double weightP = 0;

    cout << "Please the weight of a person in kilograms: ";
    cin >> weightKg;
    cout << endl;

    weightP = weightKg * 2.2;

    cout << fixed << showpoint << setprecision(2);

    cout << "The equivalent weight in pounds: ";
    cout << weightP;
    cout << endl;

    return 0;
}
