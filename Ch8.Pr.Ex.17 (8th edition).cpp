#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void input(ifstream& inFile, string NAMES[], double data[][3]);
void weekpay(double data[][3]);
void above_average(const double data[][3], const string NAMES[]);
void print(const string NAMES[], const double data[][3]);

int main()
{
    ifstream infile;
    string names[10];
    double hours_payrate[10][3] = {0};

    input(infile, names, hours_payrate);
    weekpay(hours_payrate);
    print(names, hours_payrate);
    cout << endl;
    above_average(hours_payrate, names);

    infile.close();

    return 0;
}

void input(ifstream& inFile, string NAMES[], double data[][3])
{
    inFile.open("C:\\Users\\Saken\\Documents\\C++\\Ch8_Ex17Data.txt");

    while(!inFile)
    {
        cout << "Cannot open a file. " << endl;
        break;
    }

    for(int row = 0; row < 10; row++)
    {
        inFile >> NAMES[row];
        for(int col = 0; col < 2; col++)
        {
            inFile >> data[row][col];
        }
    }
}

void weekpay(double data[][3])
{
    for(int row = 0; row < 10; row++)
    {
        if(data[row][0] >= 40)
            data[row][2] = (data[row][0] - 40) * (1.5 * data[row][1]) + 40 * data[row][1];
        else
            data[row][2] = data[row][0] * data[row][1];
    }
}

void print(const string NAMES[], const double data[][3])
{
    cout << fixed << showpoint << setprecision(2);
    for(int row = 0; row < 10; row++)
    {
        cout << NAMES[row] << " ";
        for(int col = 0; col < 3; col++)
        {
            cout << data[row][col];
            if(col == 0)
                cout << " hours,";
            else if(col == 1)
                cout << " $/hr,";
            cout << "  ";
        }
        cout << "USD" << endl;
    }
}
void above_average(const double data[][3], const string NAMES[])
{
    double sum = 0;
    double average;

    for(int row = 0; row < 10; row++)
    {
        sum = sum + data[row][2];
    }

    average = sum / 10.0;

    cout << "Average weekly pay: " << average << "$" << endl;

    cout << "Employee names whose pay is greater than ";
    cout << "or equal to the average weekly pay: " << endl;

    for(int row = 0; row < 10; row++)
    {
        if(data[row][2] >= average)
            cout << NAMES[row] << ", ";
    }
}
