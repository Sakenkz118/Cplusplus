#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 6;
void getData(double list[], int length, double time[]);
void averageSpeedOverTimeInterval(double list[], int length, double avgSpeed[]);
double maxAvgSpeed(double avgSpeed[], int length);
double minAvgSpeed(double avgSpeed[], int length);
void print(double list[], int length, double avgSpeed[], double time[]);

int main()
{
    double distanceTraveled[SIZE];
    double averageSpeed[SIZE];
    double time[SIZE];

    cout << fixed << showpoint << setprecision(2);

    getData(distanceTraveled, SIZE, time);
    averageSpeedOverTimeInterval(distanceTraveled, SIZE, averageSpeed);
    print(distanceTraveled, SIZE, averageSpeed, time);

    cout << "Maximum average speed: " << maxAvgSpeed(averageSpeed, SIZE) << endl;

    cout << "Minimum average speed: " << minAvgSpeed(averageSpeed, SIZE) << endl;

    return 0;
}

void getData(double list[], int length, double time[])
{
    cout << "Enter 6 time intervals: " << endl;

    for(int interval = 0; interval < 6; interval++)
        cin >> time[interval];

        cout << endl;
    cout << "Enter the total distance traveled after every user defined units of time." << endl;

    for (int index = 0; index < length; index++)
        {
            cout << "Enter total distance traveled at time " << time[index] << " units: ";
            cin >> list[index];
            cout << endl;
        }
}

void averageSpeedOverTimeInterval(double list[], int length, double avgSpeed[])
{
    for (int index = 0; index < length - 1; index++)
        avgSpeed[index] = (list[index + 1] - list[index]) / 10;
}

double maxAvgSpeed(double avgSpeed[], int length)
{
    double max = avgSpeed[0];

    for (int index = 1; index < length - 1; index++)
        if (avgSpeed[index] > max)
        max = avgSpeed[index];

    return max;
}

double minAvgSpeed(double avgSpeed[], int length)
{
    double min = avgSpeed[0];

    for (int index = 1; index < length - 1; index++)
        if (avgSpeed[index] < min)
        min = avgSpeed[index];

    return min;
}
void print(double list[], int length, double avgSpeed[], double time[])
{
    cout << setw(7) << "Time " << setw(20) << "Distance Traveled " << setw(10) << "Average Speed / Time Interval" << endl;

    cout << setw(5) << 0 << setw(14) << list[0] << setw(6) << " " << setw(10) << 0 << " [0, 0] " << endl;

    for (int index = 1; index < length; index++)
        cout << setw(5) << time[index] << setw(14) << list[index] << setw(6) << " " << setw(10)
             << avgSpeed[index - 1] << " [" << time[index - 1] << ", " << time[index] << "]" << endl;
}
