#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double pi = 0;
    int i;
    int n;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; ++i)
    {
        pi = pi + pow(-1,i+1)/(2 * i - 1);
    }

    pi = 4 * pi;

    cout << endl;
    cout << "pi = " << pi << endl;

    return 0;
}
