#include <iostream>
#include <fstream>

using namespace std;

void calculate_total_points(char *Answered, char *Check, int& points);
char calculate_grade(int& points);

int main()
{
    char *check = new char[20];
    char *student_ID = new char[10];
    char *answers = new char[20];

    ifstream infile;
    char ch;
    int points = 0;

    infile.open("c:\\C++\\Ch8_Ex6Data.txt");

        for (int i = 0; i < 20; i++)
            {
                infile >> check[i];
//                cout << check[i];
            }

//        cout << endl;
     while (infile){
        for (int j = 0; j < 8; j++)
        {
            infile >> student_ID[j];
//            cout << student_ID[j];
        }
//        cout << " ";

        for (int k = 0; k <= 20; k++)
        {
            infile.get(answers[k]);
//            cout << answers[k];
        }

    calculate_total_points (answers, check, points);
//    cout << endl;
/*    int index = 0;
    for (int l = 0; l < 20; l++)
    {
        cout << index;
        index++;
        if (index >= 10)
            index = index - 10;
    }
*/
        for (int j = 0; j < 8; j++)
        {
            cout << student_ID[j];
//            cout << student_ID[j];
        }

        cout << " ";
    for (int l = 1; l <= 20; l++)
    {
        cout << answers[l];
    }

    /*
    for (int l = 0; l < 20; l++)
    {
        cout << check[l];
    }

    cout << endl; */

    cout << "  Points: " << points << " ";
    cout << "Grade: " << calculate_grade(points) << endl;
    points = 0;

    }

    infile.close();

    return 0;
}

void calculate_total_points(char *Answered, char *Check, int& points)
{

    for (int i = 0; i < 20; i++)
    {
        if (Answered[i + 1] == Check[i])
            points = points + 2;
        else if (Answered[i + 1] == ' ')
            points = points + 0;
        else if (Answered[i + 1] != Check[i])
            points = points - 1;
    }
}

char calculate_grade(int& points)
{
    double percentage;
    char grade;

    if (points >= 0)
        percentage = (points / 40.0) * 100;
    else
        percentage = 0;

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

