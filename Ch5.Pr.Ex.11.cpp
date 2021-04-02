#include <iostream>

using namespace std;

int main ()
{
    int firstNum, secondNum;
    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 1;
    int letter = static_cast<int>('A');
    int sum = 0;

    cout << "Please enter two integers (where first number is less than second): "; // Prompt line
    cin >> firstNum >> secondNum;
    cout << endl;

    if (firstNum < secondNum) // Check conditions
    {
        cout << "Entered numbers are " << firstNum << " and " << secondNum << endl;
        cout << endl;

        if (firstNum % 2 != 0) // if 1st number is odd number
        {
            cout << "Odd numbers and their squares between " << firstNum << " and " << secondNum;
            cout << ": " << endl;
            temp1 = firstNum;
            do
            {
                cout << temp1 << " " << temp1 * temp1 << endl;
                temp1 = temp1 + 2;
            }
            while (temp1 <= secondNum);
            cout << endl;

            cout << "Sum of even numbers between " << firstNum << " and " << secondNum;
            cout << ": ";
            temp2 = firstNum + 1;
            do
            {
                sum = sum + temp2;
                temp2 = temp2 + 2;
            }
            while (temp2 <= secondNum);
            cout << sum << endl;
        }
        else                   // if 1st number is even number
        {
            temp1 = firstNum + 1;
            cout << "Odd numbers and their squares between " << firstNum << " and " << secondNum;
            cout << ": " << endl;
            do
            {
                cout << temp1 << " " << temp1 * temp1 << endl;
                temp1 = temp1 + 2;
            }
            while (temp1 <= secondNum);
            cout << endl;

            cout << "Sum of even numbers between " << firstNum << " and " << secondNum;
            cout << ": ";
            temp2 = firstNum;
            do
            {
                sum = sum + temp2;
                temp2 = temp2 + 2;
            }
            while (temp2 <= secondNum);
            cout << sum << endl;
        }
    }
    else
    {
        cout << "First number must be less than the second one! ";
        cout << "Please try again!" << endl;
    }

    cout << endl;
    cout << "Squares of numbers between 1 and 10: " << endl;
    do
    {
        cout << temp3 << ": " << temp3 * temp3 << endl;
        temp3++;
    }
    while (temp3 <= 10);
    cout << endl;

    cout << "All uppercase letters are " << endl;
    do
    {
        cout << static_cast<char>(letter) << " ";
        letter++;
    }
    while (letter <= 'Z');
    cout << endl;

    return 0;
}
