#include <iostream>

using namespace std;

void functionToCount(long& number);

int main ()
{
    long num;

    cout << "Please enter an integer: ";
    cin >> num;
    cout << endl;

    functionToCount(num);

    return 0;
}

void functionToCount(long& number)
{
    int evens = 0;
    int zeroes = 0;
    int odds = 0;
    int remainder;

    do
    {
        remainder = number % 10;
        switch (remainder % 2)
        {
        case 0:
            evens++;
            if(remainder == 0)
                zeroes++;
            break;
        case 1:
        case -1:
            odds++;
            break;
        }
        number = number / 10;
    } while (number != 0);

    cout << "Evens: " << evens << endl;
    cout << "Odds: " << odds << endl;
    cout << "Zeros: " << zeroes << endl;
}
