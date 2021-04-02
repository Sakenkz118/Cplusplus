#include <iostream>

using namespace std;

int main ()
{
    int noOfLockers;
    int countOfDivisors;
    int counter = 0;

    cout << "Please enter the total number of lockers: ";
    cin >> noOfLockers;
    cout << endl;

    for (int i = 1; i <= noOfLockers; i++)
    {
        countOfDivisors = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                countOfDivisors++;
        }

        if (countOfDivisors % 2 != 0)
        counter++;
    }

    cout << "The number of lockers that are opened: " << counter << endl;

    return 0;
}
