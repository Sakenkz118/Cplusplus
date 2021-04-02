#include <iostream>

using namespace std;

int main ()
{
    double num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, sum = 0;
    int sumInteger;

    cout << "Please enter 5 decimal numbers separately: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << endl;

    sum = num1 + num2 + num3 + num4 + num5;
    sumInteger = sum;

    cout << "The total sum is equal to " << sumInteger << endl;

    return 0;
}
