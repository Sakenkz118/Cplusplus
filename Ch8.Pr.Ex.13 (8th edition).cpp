#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void inputData(string STUDENTS[10], double RESULTS[10][5], ifstream& inFile);
void calculate(string STUDENTS[10], double RESULTS[10][5], double AVERAGE[10], char GRADES[10]);
char calculate_grade(double percentage);
void print(string STUDENTS[10], double RESULTS[10][5], double AVERAGE[10], char GRADES[10]);

int main()
{
    ifstream infile;
    string students[10];
    double testResults[10][5] = {0};
    double average[10] = {0};
    char grades[10];

    inputData(students, testResults, infile);
    calculate(students, testResults, average, grades);
    print(students, testResults, average, grades);

    infile.close();

    return 0;
}

void inputData(string STUDENTS[10], double RESULTS[10][5], ifstream& inFile)
{
    inFile.open("C:\\Users\\Saken\\Documents\\C++\\Ch8_Ex13Data.txt");

    for (int rows = 0; rows < 10; rows++)
    {
        inFile >> STUDENTS[rows];
        for (int col = 0; col < 5; col++)
        {
            inFile >> RESULTS[rows][col];
        }
    }
}

void calculate(string STUDENTS[10], double RESULTS[10][5], double AVERAGE[10], char GRADES[10])
{
    double sum = 0;
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            sum = sum + RESULTS[row][col];
        }
        AVERAGE[row] = sum / 5.0;
        GRADES[row] = calculate_grade(AVERAGE[row]);
        sum = 0;
    }

}

char calculate_grade(double percentage)
{
    char grade;

    switch(static_cast<int>(percentage) / 10)
    {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;

        case 7:
            grade = 'C';
            break;

        case 6:
            grade = 'D';
            break;

        default:
            grade = 'F';
    }

    return grade;
}

void print(string STUDENTS[10], double RESULTS[10][5], double AVERAGE[10], char GRADES[10])
{
    double sum = 0;

    cout << fixed << showpoint << setprecision(1);
    for (int rows = 0; rows < 10; rows++)
    {
        cout << STUDENTS[rows] << " ";
        for (int col = 0; col < 5; col++)
        {
            cout << RESULTS[rows][col] << " ";
        }
        cout << "Average: " << AVERAGE[rows] << " " << "Grade: " << GRADES[rows];
        sum = sum + AVERAGE[rows];
        cout << endl;
    }
    cout << endl;

    cout << fixed << showpoint << setprecision(2);
    cout << "Class Average: " << sum / 10 << endl;
}
