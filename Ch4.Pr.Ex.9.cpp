#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double number1, number2;
    char operand;

    cout << "Enter two integers: ";
    cin >> number1 >> number2;
    cout << endl;

    cout << "Enter operator (*,/,+,-): ";
    cin >> operand;
    cout << endl;

    switch (operand)
    {
    case '+':
        cout << number1 << " + " << number2 << " = " << fixed <<showpoint << setprecision (2) << number1 + number2 << endl;
        break;
    case '-':
        cout << number1 << " - " << number2 << " = " << fixed <<showpoint << setprecision (2) << number1 - number2 << endl;
        break;
    case '*':
        cout << number1 << " * " << number2 << " = " << fixed <<showpoint << setprecision (2) << number1 * number2 << endl;
        break;
    case '/':
        if (number2 == 0)
            cout << "Division by zero!" << endl;
        else
        cout << number1 << " / " << number2 << " = " << fixed <<showpoint << setprecision (2) << number1 / number2 << endl;
        break;
    }

    return 0;
}


