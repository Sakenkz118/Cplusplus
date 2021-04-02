#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int num, temp;
    int sum = 0;
    int count = 0;
    int degree = 0;
    int power = count - 1;
    int value = 0;

    cout << "Please enter a number: ";
    cin >> num;
    cout << endl;

    cout << "Entered number is " << num << "." << endl;
    cout << endl;
    if (num < 0)
        num = -num;

    cout << "The individual digits of " << num << " is " << endl;
    temp = num;

    while(num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
        count++;
    }

    for (int i = 0; i <= count; i++)
    {
        degree = pow(10,power);

        if(power == 2)
            value = temp / degree;

        if (power == 0)
        {
        int random = (temp / degree) - value;
        cout << random << " ";
        }
        else
        cout << temp / degree << " ";
        temp = temp % degree;
        power--;

    }
        cout << endl;
    cout << "The sum of the digits is " << sum << "." << endl;
    cout << endl;
    return 0;
}
