#include <iostream>

using namespace std;

int main ()
{
    int firstNum, secondNum;
    int temp1 = 0;
    int temp2 = 0;
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
            for (temp1 = firstNum; temp1 <= secondNum; temp1 = temp1 + 2)
            {
                cout << temp1 << " " << temp1 * temp1 << endl;
            }
            cout << endl;

            cout << "Sum of even numbers between " << firstNum << " and " << secondNum;
            cout << ": ";

            for (temp2 = firstNum + 1; temp2 <= secondNum; temp2 = temp2 + 2)
            {
                sum = sum + temp2;
            }

            cout << sum << endl;
        }
        else                   // if 1st number is even number
        {
            cout << "Odd numbers and their squares between " << firstNum << " and " << secondNum;
            cout << ": " << endl;
            for (temp1 = firstNum + 1; temp1 <= secondNum; temp1 = temp1 + 2)
            {
                cout << temp1 << " " << temp1 * temp1 << endl;
            }
            cout << endl;

            cout << "Sum of even numbers between " << firstNum << " and " << secondNum;
            cout << ": ";

            for (temp2 = firstNum; temp2 <= secondNum; temp2 = temp2 + 2)
            {
                sum = sum + temp2;
            }

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
    for (int temp3 = 1; temp3 <= 10; temp3++)
    {
        cout << temp3 << ": " << temp3 * temp3 << endl;
    }
    cout << endl;

    cout << "All uppercase letters are " << endl;
    for (int letter = static_cast<int>('A'); letter <= 'Z'; letter++)
    {
        cout << static_cast<char>(letter) << " ";
    }
    cout << endl;

    return 0;
}
