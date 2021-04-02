#include <iostream>

using namespace std;

int main ()
{
    double a, b, t;
    int dish = 1;

    cout << "Please enter no. of minute(s) to prepare the first dish: ";
    cin >> a;
    cout << endl;

    cout << "Enter extra minute(s) needed for additional dish: ";
    cin >> b;
    cout << endl;

    cout << "Input total amount of time in minute(s): ";
    cin >> t;
    cout << endl;

    for (int i = a; i <= t; i = i + i)
    {
        i = i + b;
        dish++;
    }

    cout << "Bianco could prepare " << dish << " dish(es)" << endl;

    return 0;
}
