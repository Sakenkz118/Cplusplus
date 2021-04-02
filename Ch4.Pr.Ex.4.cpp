#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double a, b, c;

    cout << "Enter the lengths of three sides of a triangle (largest side first): ";
    cin >> a >> b >> c;
    cout << endl;

    if (pow(a,2) == pow(b,2) + pow (c, 2))
        cout << "Right Triangle" << endl;
    else cout << "Not a Right Triangle" << endl;

    return 0;
}
