#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int double_number(int num);
int reverse_num(int num);
int raise_power(int num, int power);
int sum_digits(int num);
int two_digit(int num);
int three_digit(int num);
bool checkPrime(int n);

int main()
{
    int option;
    int num;
    int power;

    srand(time(0));
    num = abs(rand() % 100);

    cout << "What would you like to do with a number " << num << " ?" << endl;
    cout << endl;

    do
    {
        cout << "Options:" << endl;
        cout << "1. Double the number." << endl;
        cout << "2. Reverse the digits of the number." << endl;
        cout << "3. Raise the number to the power of 2, 3, or 4." << endl;
        cout << "4. Sum the digits of the number." << endl;
        cout << "5. If the number is a two-digit number,"
             << "then raise the first digit to the power of the second digit." << endl;
        cout << "6. If the number is a three-digit number and the last digit is less than or"
                "equal to 4, then raise the first two digits to the power of the last digit." << endl;
        cout << "To quit, type -1" << endl;
        cout << endl;
        cout << "Option: ";

        cin >> option;
        cout << endl;

        switch(option)
        {
        case -1:
        break;
        case 1:
            num = double_number(num);
            cout << "New num is " << num << endl;

            if(checkPrime(num) == true)
                cout << "It is a prime number." << endl;
            else
                cout << "It is NOT a prime number." << endl;

            cout << endl;

            if(num < 10)
            {
                cout << "This number is smaller than 10. +10 will be added to it" << endl;
                cout << "Before: " << num << endl;
                num = num + 10;
                cout << "After: " << num << endl;

                if(checkPrime(num) == true)
                    cout << "It is a prime number." << endl;
                else
                    cout << "It is NOT a prime number." << endl;

                cout << endl;
            }
            break;
        case 2:
            num = reverse_num(num);

            cout << "New num is " << num << endl;

            if(checkPrime(num) == true)
                cout << "It is a prime number." << endl;
            else
                cout << "It is NOT a prime number." << endl;

            cout << endl;
            if(num < 10)
            {
                cout << "This number is smaller than 10. +10 will be added to it" << endl;
                cout << "Before: " << num << endl;
                num = num + 10;
                cout << "After: " << num << endl;

                if(checkPrime(num) == true)
                    cout << "It is a prime number." << endl;
                else
                    cout << "It is NOT a prime number." << endl;

                cout << endl;
            }
            break;
        case 3:
            cout << "What degree(2,3 or 4)?: ";
            cin >> power;
            num = raise_power(num, power);
            cout << "New num is " << num << endl;

            if(checkPrime(num) == true)
                cout << "It is a prime number." << endl;
            else
                cout << "It is NOT a prime number." << endl;

            cout << endl;

            if(num < 10)
            {
                cout << "This number is smaller than 10. +10 will be added to it" << endl;
                cout << "Before: " << num << endl;
                num = num + 10;
                cout << "After: " << num << endl;

                if(checkPrime(num) == true)
                    cout << "It is a prime number." << endl;
                else
                    cout << "It is NOT a prime number." << endl;

                cout << endl;
            }
            break;
        case 4:
            num = sum_digits(num);
            cout << "Sum of each digit in num is " << num << "." << endl;
            cout << endl;

            if(checkPrime(num) == true)
                cout << "It is a prime number." << endl;
            else
                cout << "It is NOT a prime number." << endl;

            cout << endl;

            if(num < 10)
            {
                cout << "This number is smaller than 10. +10 will be added to it" << endl;
                cout << "Before: " << num << endl;
                num = num + 10;
                cout << "After: " << num << endl;

                if(checkPrime(num) == true)
                    cout << "It is a prime number." << endl;
                else
                    cout << "It is NOT a prime number." << endl;

                cout << endl;
            }
            break;
        case 5:
            num = two_digit(num);
            cout << "New num is " << num << endl;
            cout << endl;

            if(checkPrime(num) == true)
                cout << "It is a prime number." << endl;
            else
                cout << "It is NOT a prime number." << endl;

            cout << endl;

            if(num < 10)
            {
                cout << "This number is smaller than 10. +10 will be added to it" << endl;
                cout << "Before: " << num << endl;
                num = num + 10;
                cout << "After: " << num << endl;

                if(checkPrime(num) == true)
                    cout << "It is a prime number." << endl;
                else
                    cout << "It is NOT a prime number." << endl;

                cout << endl;
            }
            break;
        case 6:
            num = three_digit(num);
            cout << "New num is " << num << endl;
            cout << endl;

            if(checkPrime(num) == true)
                cout << "It is a prime number." << endl;
            else
                cout << "It is NOT a prime number." << endl;

            cout << endl;

            if(num < 10)
            {
                cout << "This number is smaller than 10. +10 will be added to it" << endl;
                cout << "Before: " << num << endl;
                num = num + 10;
                cout << "After: " << num << endl;

                if(checkPrime(num) == true)
                    cout << "It is a prime number." << endl;
                else
                    cout << "It is NOT a prime number." << endl;

                cout << endl;
            }
            break;
        default:
            cout << "Wrong option was chosen. Try again!" << endl;
            cout << endl;
        }
    }
    while(option != -1);

    return 0;
}

int double_number(int num)
{
    return 2 * num;
}

int reverse_num(int num)
{
    int temp1 = num;
    int temp2 = num;
    int degree = 1;
    int result = 0;
    int magnitude;

    do
    {
        temp1 = temp1 / 10;
        degree++;
    }
    while(temp1 / 10 > 0);
//    cout << "Degree = " << degree << endl;

    magnitude = degree;
    degree = 0;

    while(degree < magnitude)
    {
        result = result + ((temp2 % 10) * pow(10, magnitude - (degree + 1)));
        temp2 = temp2 / 10;
        degree++;
    }

    if(degree % 2 != 0 && (pow(10, degree - 1)) < result)
        result = result + 1;

    return result;
}

int raise_power(int num, int power)
{
    int result;

    switch(power)
    {
    case 2:
        result = num * num;
        break;
    case 3:
        result = num * num * num;
        break;
    case 4:
        result = num * num * num * num;
        break;
    default:
            cout << "Wrong input entered." << endl;
            result = num;
    }

    return result;
}

int sum_digits(int num)
{
    int remainder;
    int sum = 0;

    while(num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    return sum;
}

int two_digit(int num)
{
    int result;

    if(num >= 10 && num <= 99)
        result = pow(num / 10, num % 10);
    else
        result = num;

    return result;
}

int three_digit(int num)
{
    int result;
    int x, y;

    if((num >= 100 && num <= 999) && (num % 10 <= 4))
       {
           x = num / 10;
           y = num % 10;
           if(num % 10 == 2 || num % 10 == 4)
              result = pow(x, y) + 1;
           else
              result = pow(x, y);
       }
    else
        result = num;

    return result;
}

bool checkPrime(int n)
{
    bool isPrime = true;

    for(int i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    return isPrime;
}
