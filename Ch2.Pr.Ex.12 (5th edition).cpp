#include <iostream>

using namespace std;

int main ()
{
    double tankCapacity; // in gallons of an automobile fuel tank
    double consumption; // the miles per gallons the automobile can be driven
    double distance;

    cout << "Please enter capacity of a fuel tank in gallons: ";
    cin >> tankCapacity;
    cout << endl;

    cout << "Please enter engine consumption in gallons: ";
    cin >> consumption;
    cout << endl;

    distance = tankCapacity * consumption; // miles

    cout << "The number of miles the automobile can be driven without refueling is ";
    cout << distance << endl;

    return 0;
}
