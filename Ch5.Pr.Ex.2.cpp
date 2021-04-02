#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int num;
    int sum = 0;

    cout << "Please enter a number: ";
    cin >> num;
    cout << endl;

    cout << "Entered number is " << num << "." << endl;
    cout << endl;
    if (num < 0)
        num = -num;

    cout << "The individual digits reversed of " << num << " is " << endl;

    while(num > 0)
    {
        cout << num % 10;
        num = num / 10;
    }

    cout << endl;
    return 0;
}
