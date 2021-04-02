#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int NO_STUDENTS = 20;

struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

void getData(ifstream& inFile, studentType student[]);
void assignTestScore(studentType student[]);
int highestTestScore(studentType student[]);
void printHighestNames(studentType student[]);

int main()
{
    ifstream infile;
    studentType group[NO_STUDENTS];

    infile.open("C:\\C++\\Ch9_Ex2Data.txt");

    if(!infile)
    {
        cout << "Cannot open a file. " << endl;
        return 1;
    }

    getData(infile, group);
    assignTestScore(group);
    cout << endl;
    cout << "Highest test score: " << highestTestScore(group) << endl;
    cout << "Its owner(s) is ";
    printHighestNames(group);
    cout << endl;

    for(int st = 0; st < 20; st++)
    {
    cout << group[st].studentFName << " " << group[st].studentLName;
    cout << " " << group[st].testScore << " " << group[st].grade;
    cout << endl;
    }
    infile.close();

    return 0;
}

void getData(ifstream& inFile, studentType student[])
{
    for(int i = 0; i < 20; i++)
    {
        inFile >> student[i].studentFName;
        inFile >> student[i].studentLName;
        inFile >> student[i].testScore;
    }
}

void assignTestScore(studentType student[])
{
    char grade;

    for(int i = 0; i < 20; i++)
    {
    switch(static_cast<int>(student[i].testScore) / 10)
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
        student[i].grade = grade;
    }
}

int highestTestScore(studentType student[])
{
    int highest = 0;

    for(int i = 0; i < 20; i++)
    {
        if(highest < student[i].testScore)
            highest = student[i].testScore;
    }

    return highest;
}

void printHighestNames(studentType student[])
{
    int compare = highestTestScore(student);

    for(int i = 0; i < 20; i++)
    {
        if(compare == student[i].testScore)
        {
            if(i > 0)
                cout << " and ";
            cout << left << student[i].studentLName <<", ";
            cout << student[i].studentFName;
        }
    }
    cout << endl;
}
