#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    double l, w, h, p, volume, newVolume;
    double reductionRate, k;

    cout << "Enter length, width and height: ";
    cin >> l >> w >> h;
    cout << endl;

    cout << "Enter amount (%) to be reduced: ";
    cin >> p;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    cout << "Values entered:" << endl;
    cout << "l = " << l << ", w = " << w << ", h = " << h;
    cout << endl;
    cout << "p = " << p << endl;

    volume = l * w * h; // initial volume

    cout << "Old volume = " << volume << endl;

    newVolume = volume * ((100 - p) / 100); // reduced volume

    cout << "New volume = " << newVolume << endl;

    k = newVolume / (h * l * w);

    reductionRate = sqrt(k);

    cout << "reductionRate = " << reductionRate << endl;

    l = l * reductionRate;
    w = w * reductionRate;

    cout << "New dimensions of the candy bar: "
         << l << " X " << w << " X " << h << endl;

    return 0;
}
