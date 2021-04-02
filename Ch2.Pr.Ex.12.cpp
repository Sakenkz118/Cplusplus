#include <iostream>

using namespace std;

int main ()
{
    double num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, sum = 0, average = 0;

    cout << "Please enter 5 decimal numbers separately: "; // step a
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << endl;

    cout << "The numbers you entered are " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << endl; // step b

    num1 = static_cast<int>(num1); // step c
    num2 = static_cast<int>(num2);
    num3 = static_cast<int>(num3);
    num4 = static_cast<int>(num4);
    num5 = static_cast<int>(num5);

    sum = num1 + num2 + num3 + num4 + num5; // step d
    average = sum/5;

    cout << "The total sum is equal to " << sum << endl; // step e
    cout << "The average is equal to " << average << endl;

    return 0;
}

