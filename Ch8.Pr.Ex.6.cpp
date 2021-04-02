#include <iostream>

using namespace std;

void PythagoreanTriple(int value1, int value2);

int main ()
{
    int m, n;

    cout << "Please enter values for integers m and n: ";
    cin >> m >> n;
    cout << endl;

    cout << "The Pythagorean triple corresponding to m and n: " << endl;
    PythagoreanTriple(m, n);

    return 0;
}

void PythagoreanTriple(int value1, int value2)
{
    int a, b, c;

    a = value1 * value1 - value2 * value2;
    b = 2 * value1 * value2;
    c = value1 * value1 + value2 * value2;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}
