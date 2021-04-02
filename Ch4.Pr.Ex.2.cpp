#include <iostream>

using namespace std;

int main ()
{
    double num1, num2, num3;

    cout << "Enter 3 numbers (non-equal) for comparison: ";
    cin >> num1 >> num2 >> num3;
    cout << endl;

    if (num1 > num2 && num2 > num3)
        cout << "Ascending order: " << num3 << ", " << num2 << ", " << num1;
    else if (num3 > num2 && num2 > num1)
        cout << "Ascending order: " << num1 << ", " << num2 << ", " << num3;
    else if (num2 > num3 && num3 > num1)
        cout << "Ascending order: " << num1 << ", " << num3 << ", " << num2;
    else if (num3 > num1 && num1 > num2)
        cout << "Ascending order: " << num2 << ", " << num1 << ", " << num3;
    else if (num2 > num1 && num1 > num3)
        cout << "Ascending order: " << num3 << ", " << num1 << ", " << num2;
    else //(num2 > num3 && num3 > num2)
        cout << "Ascending order: " << num2 << ", " << num3 << ", " << num1;

    return 0;
}
