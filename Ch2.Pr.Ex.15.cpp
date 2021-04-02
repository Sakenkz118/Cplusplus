#include <iostream>

using namespace std;

int main ()
{
    int hours = 0, minutes = 0, seconds = 0;

    cout << "Please enter elapsed time for an event in hours, minutes, and seconds: ";

    cin >> hours >> minutes >> seconds;
    cout << endl;

    cout << "The time you entered in standard form is " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds";
    cout << endl;

    seconds = seconds + minutes * 60 + hours *3600;

    cout << "The elapsed time is " << seconds << endl;


    return 0;
}

