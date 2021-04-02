#include <iostream>

using namespace std;

int main ()
{
    int populationA, populationB;
    double rate1, rate2;
    double timeYears = 0;

    cout << "Please enter population for town A: ";
    cin >> populationA;
    cout << endl;

    cout << "Please enter the growth rate (%) for town A: ";
    cin >> rate1;
    cout << endl;

    cout << "Please enter population for town B: ";
    cin >> populationB;
    cout << endl;

    cout << "Please enter the growth rate (%) for town B: ";
    cin >> rate2;
    cout << endl;

    while (populationA <= populationB)
    {
        populationA = populationA * (1 + (rate1 / 1000));
        populationB = populationB * (1 + (rate2 / 1000));
        timeYears = timeYears + 0.1;
    }

    cout << "After " << timeYears << " year(s) ";
    cout << "population of town A will be equal to or then greater than town B. " << endl;
    cout << "Population of town A will be " << populationA << endl;
    cout << "Population of town B will be " << populationB << endl;

    return 0;
}
