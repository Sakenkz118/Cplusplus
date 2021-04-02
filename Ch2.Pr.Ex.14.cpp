#include <iostream>

using namespace std;

int main ()
{
    int seconds = 0;

    cout << "Please enter elapsed time for an event in seconds: ";
    cin >> seconds;
    cout << endl;

    cout << "The elapsed time converted is " << seconds / 3600;
    seconds = seconds % 3600;

    cout << " : " << seconds / 60;
    seconds = seconds % 60;

    cout << " : " << seconds;

    return 0;
}
