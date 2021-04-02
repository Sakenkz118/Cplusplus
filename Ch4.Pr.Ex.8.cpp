#include <iostream>

using namespace std;

int main ()
{
    int integer1, integer2;
    char operand;

    cout << "Enter two integers: ";
    cin >> integer1 >> integer2;
    cout << endl;

    cout << "Enter operator (*,/,+,-): ";
    cin >> operand;
    cout << endl;

    switch (operand)
    {
    case '+':
        cout << integer1 << " + " << integer2 << " = " << integer1 + integer2 << endl;
        break;
    case '-':
        cout << integer1 << " - " << integer2 << " = " << integer1 - integer2 << endl;
        break;
    case '*':
        cout << integer1 << " * " << integer2 << " = " << integer1 * integer2 << endl;
        break;
    case '/':
        if (integer2 == 0)
            cout << "Division by zero!" << endl;
        else
        cout << integer1 << " / " << integer2 << " = " << static_cast<double>(integer1) / integer2 << endl;
        break;
    }

    return 0;
}

