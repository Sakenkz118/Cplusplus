#include <iostream>

using namespace std;

int main() //Start of main
{
    int num = 1, divisor = 1, sum = 0;
    int check;
    int i = 1;

    cout << "The first four perfect integers: " << endl;

    while(num <= 8200)
        { // start of first loop.
            while(divisor <= 8200)
            {    //start of second loop.
                if((divisor < num) && (num % divisor == 0))
                {
                    sum = sum + divisor;
                } //End of if statement
                divisor++;
            }    //End of second loop
            if(sum == num)
                {
                    cout << num << endl;
                }
                num++;

                divisor = 1; sum = 0;
        } //End of First loop

        cout << endl;
        cout << endl;

        cout << "Please enter a number for checking: ";
        cin >> check;
        cout << endl;

        sum = 0;
        while (i < check)
        {
            if (check % i == 0)
                sum = sum + i;
            i++;
        }

        if (sum == check)
        {
            cout << check << " is a perfect number." << endl;
        }
        else
            cout << check << " is NOT a perfect number." << endl;

    return 0;
} //End of main
