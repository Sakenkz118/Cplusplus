#include <iostream>

using namespace std;

int main ()
{
    double actualCapacity = 0;
    double claimedCapacity = 0;

    cout << "Please enter the size of the hard drive (in GB)" << endl;
    cout << "specified by the manufacturer: ";
    cin >> claimedCapacity;
    cout << endl;

    actualCapacity = claimedCapacity * 0.93125;

    cout << "The actual storage capacity of the hard drive is " << actualCapacity;
    cout << "GB";
    cout << endl;

    return 0;
}
