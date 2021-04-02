#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double mean(double X[], int& COUNT);
double standardDeviation(double X[], int& COUNT);

int main ()
{
    double x[100] = {0};
    int counter = 0;

    cout << "Please enter numbers count: ";
    cin >> counter;
    cout << endl;

    cout << "Enter actual numbers: ";

    for (int i = 0; i < counter; i++)
    {
        cin >> x[i];
    }

    cout << fixed << showpoint << setprecision(2);

    cout << "Mean: " << mean(x, counter) << endl;
    cout << "Standard Deviation: " << standardDeviation(x, counter) << endl;

    return 0;
}

double mean(double X[], int& COUNT)
{
    double sum = 0;

    for (int i = 0; i < COUNT; i++)
    {
        sum = sum + X[i];
    }

    return (sum / static_cast<double>(COUNT));

}

double standardDeviation(double X[], int& COUNT)
{
    double MEAN = mean(X, COUNT);
    double sum = 0;

    for(int i = 0; i < COUNT; i++)
    {
        sum = sum + (pow(X[i] - MEAN, 2));
    }

    double DEVIATION = sqrt(sum / static_cast<double>(COUNT));

    return DEVIATION;

}

