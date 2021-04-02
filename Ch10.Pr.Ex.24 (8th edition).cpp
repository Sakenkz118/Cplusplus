#include <iostream>
#include <cmath>

using namespace std;

class integerManipulation
{
public:
    void setNum(long long n);
    //Function to set num.
    //Postcondition: num = n;

    long long getNum();
    //Function to return num.
    //Postcondition: The value of num is returned.

    void reverseNum();
    //Function to reverse the digits of num.
    //Postcondition: revNum is set to num with digits in
    // in the reverse order.

    void classifyDigits();
    //Function to count the even, odd, and zero digits of num.
    //Postcondition: evenCount = the number of even digits in num.
    // oddCount = the number of odd digits in num.

    int getEvensCount();
    //Function to return the number of even digits in num.
    //Postcondition: The value of evensCount is returned.

    int getOddsCount();
    //Function to return the number of odd digits in num.
    //Postcondition: The value of oddscount is returned.

    int getZerosCount();
    //Function to return the number of zeros in num.
    //Postcondition: The value of zerosCount is returned.

    int sumDigits();
    //Function to return the sum of the digits of num.
    //Postcondition: The sum of the digits is returned.

    integerManipulation(long long n = 0);
    //Constructor with a default parameter.
    //The instance variable num is set accordingto the
    //parameter, and other instance variables are set to zero.
    //The default value of num is 0;
    //Postcondition: num = n; revNum = 0; evenscount = 0;
    // oddsCount = 0; zerosCount = 0;

    long long getReverseNum() const;
    // Function to return result of the reverse of a number
    // Postcondition: reversed number, revNum, is returned

    void primeNumberChecker();
    // Function to check if the num is prime
    // Postcondition: print out message about the prime status

    void splitSum(int n1) const;
    // Function to split the num into n-digit numbers and sum them all
    // Postcondition: display n-digit numbers and sum


    void primeFactorization();
    // Function to factorize any number into prime number(s)
    // Postcondition: output factorized prime numbers

private:
    long long num;
    long long revNum;
    int evensCount;
    int oddsCount;
    int zerosCount;
    bool isPrime;
};

int main()
{
    integerManipulation number;
    long long num1;

    cout << "Enter an integer: ";
    cin >> num1;
    cout << endl;

    number.setNum(num1);
    number.classifyDigits();

    cout << number.getNum() << "------" << endl
         << "The number of even digits: "
         << number.getEvensCount() << endl
         << "The number of zeros: "
         << number.getZerosCount() << endl
         << "The number of odd digits: "
         << number.getOddsCount() << endl;

    cout << "Sum of individual digits are " << number.sumDigits() << endl;

    number.reverseNum();
    cout << number.getNum() << " in reverse order is " << number.getReverseNum() << endl;

    number.primeNumberChecker();
    cout << endl;

    number.primeFactorization();
    number.splitSum(2);

    return 0;
}

void integerManipulation::setNum(long long n)
{
    num = n;
}

long long integerManipulation::getNum()
{
    return num;
}

void integerManipulation::reverseNum()
{
    long long temp;
    temp = abs(num);
    int rem;

    do
    {
        rem = temp % 10;
        revNum = revNum * 10 + rem;
        temp /= 10;
    }
    while (temp != 0);
}

void integerManipulation::classifyDigits()
{
    long long temp;
    temp = abs(num);
    int digit;

    while (temp != 0)
    {
        digit = temp - (temp / 10 ) * 10;
        temp = temp / 10;

        if (digit % 2 == 0)
        {
            evensCount++;
            if (digit == 0)
                zerosCount++;
        }
        else
            oddsCount++;
    }
}

int integerManipulation::getEvensCount()
{
    return evensCount;
}

int integerManipulation::getOddsCount()
{
    return oddsCount;
}

int integerManipulation::getZerosCount()
{
    return zerosCount;
}

int integerManipulation::sumDigits()
{
    long long temp;
    temp = abs(num);
    int digit;
    int sum = 0;

    while (temp != 0)
    {
        digit = temp - (temp / 10 ) * 10;
        temp = temp / 10;
        sum += digit;
    }

    return sum;
}

integerManipulation::integerManipulation(long long n)
{
    num = n;
    revNum = 0;
    evensCount = 0;
    oddsCount = 0;
    zerosCount = 0;
    isPrime = false;
}

long long integerManipulation::getReverseNum() const
{
    return revNum;
}

void integerManipulation::primeNumberChecker()
{
  isPrime = true;

  if(num > 0)
  {
      for(int i = 2; i <= num / 2; i++)
      {
          if(num % i == 0)
          {
              isPrime = false;
              break;
          }
      }

      if(isPrime)
        cout << "This is a prime number" << endl;
      else
        cout << "This is not a prime number" << endl;
  }
  else
    cout << "Negative number or 0 is entered. Please try again!" << endl;
}

void integerManipulation::primeFactorization()
{
    long long temp = num;

    cout << "Prime factorization of a " << num << " is equal to ";

    // Print the number of 2s that divide n
    while (temp % 2 == 0)
    {
        cout << 2 << " ";
        temp = temp / 2;
    }

    // temp must be odd at this point. So we can skip
    // one element (Note i = i + 2)
    for (int i = 3; i <= sqrt(temp); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (temp % i == 0)
        {
            cout << i << " ";
            temp = temp / i;
        }
    }

    // This condition is to handle the case when temp
    // is a prime number greater than 2
    if (temp > 2)
        cout << temp << " ";
        cout << endl;
}

void integerManipulation::splitSum(int n1) const
{
    long long temp1 = num;
    long long temp2;
    long long divider = 1;
    int sum = 0;

    cout << endl;

    cout << "Splitting " << num << " into " << n1 << " blocks of number and summing them up " << endl;

    for(int i = 0; i < n1; i++)
    {
        divider = divider * 10;
    }

    while(temp1 != 0)
    {
        temp2 = temp1 % divider;
        sum = sum + temp2;
        cout << temp2 << " ";
        temp1 = temp1 / divider;
    }
    cout << "= " << sum << endl;
}
