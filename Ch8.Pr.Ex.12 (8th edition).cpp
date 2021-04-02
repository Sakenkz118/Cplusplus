#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void readValues(string NAMES[], double milesRunDay[5][7], ifstream& inFile);
void calculateStatData(string NAMES[], double milesRunDay[5][7], double TOTAL_MILES[5], double AVERAGE_MILES[5]);
void printResults(string NAMES[], double milesRunDay[5][7], double TOTAL_MILES[5], double AVERAGE_MILES[7]);

int main()
{
    string runnerNames[5];
    double dailyMiles[5][7] = {0};
    ifstream infile;
    double totalMiles[5] = {0};
    double averageMiles[7] = {0};

    readValues(runnerNames, dailyMiles, infile);
    calculateStatData(runnerNames, dailyMiles, totalMiles, averageMiles);
    printResults(runnerNames, dailyMiles, totalMiles, averageMiles);

    infile.close();

    return 0;
}

void readValues(string NAMES[], double milesRunDay[5][7], ifstream& inFile)
{
    inFile.open("C:\\Users\\Saken\\Documents\\C++\\Ch8_Ex12Data.txt");

    for (int i = 0; i < 5; i++)
    {
        inFile >> NAMES[i];

        for (int j = 0; j < 7; j++)
            {
                inFile >> milesRunDay[i][j];
            }
    }
}

void calculateStatData(string NAMES[], double milesRunDay[5][7], double TOTAL_MILES[5], double AVERAGE_MILES[7])
{
    double sum;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
            {
                TOTAL_MILES[i] = TOTAL_MILES[i] + milesRunDay[i][j];
            }
    }

    for (int k = 0; k < 7; k++)
    {
        sum = 0;

        for (int l = 0; l < 5; l++)
        {
            sum = sum + milesRunDay[l][k];
        }

        AVERAGE_MILES[k] = sum / 5.0;

    }

}
void printResults(string NAMES[], double milesRunDay[5][7], double TOTAL_MILES[5], double AVERAGE_MILES[7])
{
    cout << fixed << showpoint << setprecision(3);

    for (int i = 0; i < 5; i++)
    {
        cout << NAMES[i] << " ";

        for (int j = 0; j < 7; j++)
            {
                cout << milesRunDay[i][j] << " ";
            }
        cout << endl;
    }

    cout << endl;
    cout << "Statistical Data" << endl;
    cout << "----------------" << endl;
    cout << "Total Miles Run:" << endl;

    for (int k = 0; k < 5; k++)
    {
        cout << NAMES[k] << ": " << TOTAL_MILES[k] << endl;
    }

    cout << endl;
    cout << "Average Miles Run Daily:" << endl;

    for (int l = 0; l < 7; l++)
    {
        cout << "Day " << l + 1 << ": " << AVERAGE_MILES[l] << endl;
    }
}
