#include <iostream>

using namespace std;

int reverseDigit(int num);

int main ()
{
    int num;

    cout << "Please enter an integer number (less than 100K): ";
    cin >> num;
    cout << endl;

    cout << "The reverse order of its digits: ";
    cout << reverseDigit(num) << endl;

    return 0;
}

int reverseDigit(int num)
{
    int ones, tens, hundreds, thousands, tenThousands;

    if (num > 0)
    {
        if (num > 9999 && num < 100000)
        {
        ones = num % 10;
        num = num / 10;
        tens = num % 10;
        num = num / 10;
        hundreds = num % 10;
        num = num / 10;
        thousands = num % 10;
        num = num / 10;
        tenThousands = num % 10;

        return tenThousands + thousands * 10 + hundreds * 100 + tens * 1000 + ones * 10000;
        }
        else if (num > 999 && num < 10000)
        {
        ones = num % 10;
        num = num / 10;
        tens = num % 10;
        num = num / 10;
        hundreds = num % 10;
        num = num / 10;
        thousands = num % 10;

        return thousands + hundreds * 10 + tens * 100 + ones * 1000;
        }
        else if (num > 99 && num < 1000)
        {
        ones = num % 10;
        num = num / 10;
        tens = num % 10;
        num = num / 10;
        hundreds = num % 10;

        return hundreds + tens * 10 + ones * 100;
        }
        else if (num > 9 && num < 100)
        {
        ones = num % 10;
        num = num / 10;
        tens = num % 10;

        return tens + ones * 10;
        }
        else
            return num;
    }
    else if (num < 0)
    {
        num = -num;
        if (num > 9999 && num < 100000)
        {
        ones = num % 10;
        num = num / 10;
        tens = num % 10;
        num = num / 10;
        hundreds = num % 10;
        num = num / 10;
        thousands = num % 10;
        num = num / 10;
        tenThousands = num % 10;

        return -1 * (tenThousands + thousands * 10 + hundreds * 100 + tens * 1000 + ones * 10000);
        }
        else if (num > 999 && num < 10000)
        {
        ones = num % 10;
        num = num / 10;
        tens = num % 10;
        num = num / 10;
        hundreds = num % 10;
        num = num / 10;
        thousands = num % 10;

        return -1 * (thousands + hundreds * 10 + tens * 100 + ones * 1000);
        }
        else if (num > 99 && num < 1000)
        {
        ones = num % 10;
        num = num / 10;
        tens = num % 10;
        num = num / 10;
        hundreds = num % 10;

        return -1 * (hundreds + tens * 10 + ones * 100);
        }
        else if (num > 9 && num < 100)
        {
        ones = num % 10;
        num = num / 10;
        tens = num % 10;

        return -1 * (tens + ones * 10);
        }
        else
            return -num;

    }

}
