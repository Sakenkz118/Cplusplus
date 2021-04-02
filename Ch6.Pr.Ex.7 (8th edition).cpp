#include <iostream>
#include <cmath>

using namespace std;

void primeNumber(int number1, int number2);

int main ()
{
    int num1, num2;

    cout << "Please enter two positive integers less than 1,000,000,000: ";
    cin >> num1 >> num2;
    cout << endl;

    if ((num1 < 0) || (num2 < 0))
        cout << "Negative number(s) entered!" << endl;
    else if ((num1 >= 1'000'000'000) || (num2 >= 1'000'000'000))
        cout << "Enter values less than 1,000,000,000!" << endl;
    else if (num1 == num2)
        cout << "Both values cannot be equal!" << endl;
    else if ((num1 == 0) || (num2 == 0))
        cout << "Zero value cannot be used." << endl;
    else if ((num1 == 1) || (num2 == 1))
        cout << "1 cannot be used. It is always divisible by itself. " << endl;
    else
    {
        primeNumber(num1, num2);
    }

    return 0;
}

void primeNumber(int number1, int number2)
{
    int sum = 0;
    bool isPrime = true;
    double sqroot;
    int j; // odd integer to decrement
    int temp, prev;
    int countPrime = 0;

    for (int i = number1; i <= number2; i++)
    {
        if (i % 2 != 0)
            {
                isPrime = true;
                sqroot = pow(i * 1.0, 0.5);
                j = static_cast<int>(sqroot);

                if (j % 2 == 0)
                    j = j - 1;

                while(j > 1)
                {
                    if(i % j == 0)
                    isPrime = false;

                    j = j - 2;
                }
// ****************** AFTER CHECKING FOR PRIME NUMBER **************

                if (isPrime == true)
                    {
                        sum = sum + i;
// -----------------------------------------------------------------
                        prev = temp;
                        temp = i;

                        if (abs(temp - prev) <= 2)
                        {
                            cout << prev << " and " << temp << " are twin primes. " << endl;
                            prev = temp;
                            countPrime = countPrime + 2;
                        }
                    }
            }
        else if (i % 2 == 0)
            {
                if (i == 2)
                    {
                        sum = sum + i;
                        prev = i;
                    }
            }
     }
     cout << endl;

     if (number1 < 5 || number2 < 5)
        countPrime = countPrime - 1;
     cout << "The number of twin primes = " << countPrime << endl;
     cout << "Sum = " << sum << endl;
}

