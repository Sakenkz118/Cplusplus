#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double E = 2.718281827;

int main ()
{
    double n1, n2, temp;
    int e;

    cout << "Please enter two integers between certain values of n: ";
    cin >> n1 >> n2;
    cout << endl;

    if ((n2 <= 100) && (n1 > 0) && (n2 > 0))
    {
        for (int i = n1; i <= n2; i = i + 10)
            {
                cout << "n = " << i << ", ";
                temp = static_cast<double>(i);
                cout << fixed << showpoint << setprecision(9);
                cout << "e: " << pow((1 + (1 / temp)), temp);
                cout << ", Difference: " << abs(pow((1 + (1 / temp)), temp) - E);
                cout << setprecision(2);
                cout << ", Proximity: " << 100 * (E - abs(pow((1 + (1 / temp)), temp) - E)) / E << "%" << endl;
            }
    }
    else if ((n2 <= 1000) && (n1 > 0) && (n2 > 0))
    {
        for (int i = n1; i <= n2; i = i + 100)
            {
                cout << "n = " << i << ", ";
                temp = static_cast<double>(i);
                cout << fixed << showpoint << setprecision(9);
                cout << "e: " << pow((1 + (1 / temp)), temp);
                cout << ", Difference: " << abs(pow((1 + (1 / temp)), temp) - E);
                cout << setprecision(2);
                cout << ", Proximity: " << 100 * (E - abs(pow((1 + (1 / temp)), temp) - E)) / E << "%" << endl;
            }
    }
    else if ((n2 <= 10000) && (n1 > 0) && (n2 > 0))
    {
        for (int i = n1; i <= n2; i = i + 1000)
            {
                cout << "n = " << i << ", ";
                temp = static_cast<double>(i);
                cout << fixed << showpoint << setprecision(9);
                cout << "e: " << pow((1 + (1 / temp)), temp);
                cout << ", Difference: " << abs(pow((1 + (1 / temp)), temp) - E);
                cout << setprecision(3);
                cout << ", Proximity: " << 100 * (E - abs(pow((1 + (1 / temp)), temp) - E)) / E << "%" << endl;
            }
    }
    else if ((n2 <= 100000) && (n1 > 0) && (n2 > 0))
    {
        for (int i = n1; i <= n2; i = i + 10000)
            {
                cout << "n = " << i << ", ";
                temp = static_cast<double>(i);
                cout << fixed << showpoint << setprecision(9);
                cout << "e: " << pow((1 + (1 / temp)), temp);
                cout << ", Difference: " << abs(pow((1 + (1 / temp)), temp) - E);
                cout << setprecision(4);
                cout << ", Proximity: " << 100 * (E - abs(pow((1 + (1 / temp)), temp) - E)) / E << "%" << endl;
            }
    }
    else if ((n2 <= 1000000) && (n1 > 0) && (n2 > 0))
    {
        for (int i = n1; i <= n2; i = i + 100000)
            {
                cout << "n = " << i << ", ";
                temp = static_cast<double>(i);
                cout << fixed << showpoint << setprecision(9);
                cout << "e: " << pow((1 + (1 / temp)), temp);
                cout << ", Difference: " << abs(pow((1 + (1 / temp)), temp) - E);
                cout << setprecision(5);
                cout << ", Proximity: " << 100 * (E - abs(pow((1 + (1 / temp)), temp) - E)) / E << "%" << endl;
            }
    }
    else if (n2 > 1000000)
    {
        for (int i = n1; i <= n2; i = i + 100000)
        {
                cout << "n = " << i << ", ";
                temp = static_cast<double>(i);
                cout << fixed << showpoint << setprecision(9);
                cout << "e: " << pow((1 + (1 / temp)), temp);
                cout << ", Difference: " << abs(pow((1 + (1 / temp)), temp) - E);
                cout << setprecision(6);
                cout << ", Proximity: " << 100 * (E - abs(pow((1 + (1 / temp)), temp) - E)) / E << "%" << endl;
        }
    }
    else if ((n1 < 0) || (n2 < 0))
        cout << "Try different values." << endl;

    return 0;
}
