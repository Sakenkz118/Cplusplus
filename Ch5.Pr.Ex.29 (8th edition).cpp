#include <iostream>

using namespace std;

int main ()
{
    int num;
    int factorial = 1;

    cout << "Please enter a non-negative number: ";
    cin >> num;
    cout << endl;

    if (num == 0)
        cout << "Factorial of " << num << " is 1." << endl;
    else if (num >= 1)
    {
        for (int i = 1; i <= num; ++i)
        {
            factorial = factorial * i;
        }
        cout << "Factorial of " << num << " is " << factorial << "." << endl;
    }
    else
        cout << "Please enter a non-negative number!" << endl;

    return 0;
}
