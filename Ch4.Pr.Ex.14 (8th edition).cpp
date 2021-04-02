#include <iostream>

using namespace std;

int main ()
{
    double parkingFee, timeInHours;

    cout << "Please enter time, in hours, stayed in parking: ";
    cin >> timeInHours;
    cout << endl;

    if (timeInHours >= 0 && timeInHours <= 24)
    {
        if (timeInHours <= 3)
            {
                parkingFee = 5;
                cout << "Final fee: " << parkingFee << endl;
            }
        else if (timeInHours > 3 && timeInHours <= 9)
            {
                parkingFee = 6 * static_cast<int>(timeInHours + 1);
                cout << "Final fee: " << parkingFee << endl;
            }
        else
            {
        parkingFee = 60;
        cout << "Final fee: " << parkingFee << endl;
            }
    }
    else
        cout << "Wrong value entered for time!" << endl;

    return 0;
}

