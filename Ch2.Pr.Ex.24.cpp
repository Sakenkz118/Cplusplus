#include <iostream>

using namespace std;

const double GRAVITATIONAL_CONSTANT = 6.67E-8; // units in dyn. cm2/g2

int main ()
{
    double m1, m2, distance, force;

    cout << "Please enter the masses (in g.) and distance (in cm): ";
    cin >> m1 >> m2 >> distance;
    cout << endl;

    force = GRAVITATIONAL_CONSTANT * ((m1 * m2) / (distance*distance));

    cout << "Gravitational force between bodies is equal to ";
    cout << force << "dyn." << endl;

    return 0;
}
