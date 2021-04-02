#include <iostream>
#include <cmath>

using namespace std;

const int ELEVEN = 11;

int main ()
{
    int num;
    int sum = 0;
    int k = -1;
    int t = 0;

    cout << "Enter a positive integer: ";
    cin >> num;
    cout << endl;

    if (num > 0)
    {
        while (num != 0)
        {
            sum = sum + pow(k,t) * (num % 10);
            num = num / 10;
            t++;
        }

        if(sum % ELEVEN == 0)
            cout << "This number is divisible by 11!" << endl;
        else
            cout << "This number is NOT divisible by 11!" << endl;
    }
    else
    cout << "Negative number OR zero is entered. Please try again!" << endl;

    return 0;
}
