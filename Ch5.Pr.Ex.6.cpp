#include <iostream>
#include <iomanip>

using namespace std;

const int N = 10;
int main()
{
    //Declare variables
    int counter; //loop control variable
    int number; //variable to store the new number
    int sumEvens = 0, sumOdds = 0;

    cout << "Please enter " << N << " integers, " << "positive, negative, or zeros." << endl; //Step 2
    cout << "The numbers you entered are:" << endl;

    for (counter = 1; counter <= N; counter++)
{
    cin >> number;
    cout << number << " ";

    switch (number % 2)
    {
        case 0:
            sumEvens = sumEvens + number;
            break;
        case 1:
        case -1:
            sumOdds = sumOdds + number;

    } //end switch
        } //end for loop
        cout << endl;

        cout << "The sum of even integers " << sumEvens << endl;
        cout << "The sum of odd integers " << sumOdds << endl;

        return 0;
}
