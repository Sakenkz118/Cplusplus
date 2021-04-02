#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void getData(double minMax[][12]);
double averageHigh(const double minMax[][12]);
double averageLow(const double minMax[][12]);
int indexHighTemp(const double minMax[][12]);
int indexLowTemp(const double minMax[][12]);
void print(const double minMax[][12]);

int main ()
{
    double temperatures[2][12] = {0};

    getData(temperatures);



    print(temperatures);

    return 0;
}

void getData(double minMax[][12])
{
    cout << "Please enter max. temperatures (in C) for each month of a year: ";
    cout << endl;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 12; j++)
            {
                cin >> minMax[i][j];
            }
    }

    cout << "Please enter min. temperatures (in C) for each month of a year: ";
    cout << endl;

    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 12; j++)
            {
                cin >> minMax[i][j];
            }
    }
}

double averageHigh(const double minMax[][12])
{
    double avgHigh;
    double sum = 0;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 12; j++)
            {
               sum = sum + minMax[i][j];
            }
    }
    avgHigh = sum / 12;

    return avgHigh;
}

double averageLow(const double minMax[][12])
{
    double avgLow;
    double sum = 0;

    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 12; j++)
            {
               sum = sum + minMax[i][j];
            }
    }
    avgLow = sum / 12;

    return avgLow;
}

int indexHighTemp(const double minMax[][12])
{
    int index = 0;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 12; j++)
            {
               if (minMax[i][j] > minMax[0][0])
                index = j;
            }
    }

    return index;
}

int indexLowTemp(const double minMax[][12])
{
    int index = 0;

    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 12; j++)
            {
               if (minMax[i][j] < minMax[1][0])
                index = j;
            }
    }

    return index;
}

void print(const double minMax[][12])
{
    cout << fixed << showpoint << setprecision(2);
    cout << endl;

    cout << "Entered values are: " << endl;
    cout << "     Jan    Feb    Mar    Apr    May    Jun"
         << "    Jul    Aug    Sep    Oct    Nov    Dec" << endl;
    for (int i = 0; i < 2; i++)
        {
            if (i == 0)
            cout << "MAX: ";
            else
                if (i == 1)
                cout << "MIN: ";
            for (int j = 0; j < 12; j++)
            {
                cout << minMax[i][j] << "   ";
            }
            cout << endl;
        }
    cout << endl;

    cout << "Annual maximum: " << averageHigh(minMax) << " C" << endl;
    cout << "Annual minimum: " << averageLow(minMax) << " C" << endl;
    cout << "The index of the highest high temperature in the array: " << indexHighTemp(minMax) << endl;
    cout << "The index of the lowest low temperature in the array: " << indexLowTemp(minMax) << endl;
}
