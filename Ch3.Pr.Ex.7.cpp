#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double mass, density, volume;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter mass in grams, and density in g/cm3: ";
    cin >> mass >> density;
    cout << endl;

    volume = mass / density;

    cout << "The volume in cubic cm: " << volume;
    cout << endl;

    return 0;
}
