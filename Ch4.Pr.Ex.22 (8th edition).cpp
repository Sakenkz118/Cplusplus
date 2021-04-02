#include <iostream>

using namespace std;

int main ()
{
    int number;
    /* test number, except 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and 31 */

    cout << "Enter positive integer between 1 and 1000 (inclusive): ";
    cin >> number;
    cout << endl;

    // Warning messages
    if (number < 0)
        cout << "Entered number is negative!" << endl;
    else if (number > 1000)
        cout << "Entered number is bigger than 1000! Try again." << endl;
    else if (number == 1)
        cout << "Entered number is equal to 1! Try again." << endl;

    if (number > 1 && number <= 1000)
    {
       if (number % 2 == 0)
            cout << number << " is NOT prime number. It's composite number. It's prime divider is 2." << endl;
            else if (number % 3 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 3." << endl;
            else if (number % 5 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 5." << endl;
            else if (number % 7 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 7." << endl;
            else if (number % 11 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 11." << endl;
            else if (number % 13 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 13." << endl;
            else if (number % 17 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 17." << endl;
            else if (number % 19 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 19." << endl;
            else if (number % 23 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 23." << endl;
            else if (number % 29 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 29." << endl;
            else if (number % 31 == 0)
                cout << number << " is NOT prime number. It's composite number. It's prime divider is 31." << endl;
            else
                cout << number << " is prime number." << endl;
    }

    return 0;
}
