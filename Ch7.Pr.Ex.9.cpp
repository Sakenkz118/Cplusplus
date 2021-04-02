#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

void calculateAverage(ifstream& input, ofstream& output, double& average);
string calculateGrade(double& cScore);

int main ()
{
    ifstream inFile;
    ofstream outFile;
    string name;
    double courseScore;
    double avg;
    int length = 0;
    double sumAverage;
    int l = 0;

    inFile.open("c:\\C++\\Ch7_Ex9Data.txt"); //open the input file
    outFile.open("c:\\C++\\Ch7_Ex9Output.txt"); //open the output file

    cout << "Processing data" << endl;

    outFile << "Student  " << setw(5);
    for(int k = 1; k <= 5; k++)
        outFile << "Test" << k << setw(5);
    outFile << " Average" << setw(5) << " Grade" << endl;

    while(!inFile.eof())
    {
        inFile >> name;
        length = name.length();
        outFile << name;
        if(length < 7)
        {
            for(int j = 1; j <= 7 - length; j++)
                outFile << " ";
        }
        calculateAverage(inFile, outFile, avg);
        sumAverage = sumAverage + avg;
        outFile << static_cast<int>(avg);
        outFile << setw(8);
        outFile << calculateGrade(avg);
        outFile << endl;
        l++;
    }
    outFile << endl;
    outFile << "Class Average = " << sumAverage / static_cast<double>(l) << endl;

    inFile.close();
    outFile.close();

    return 0;
}

void calculateAverage(ifstream& input, ofstream& output, double& average)
{
    double grade;
    double sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        input >> grade;
        output << setw(6) << grade;
        sum = sum + grade;
    }
    output << setw(7);
    average = sum / 5.0;
}
string calculateGrade(double& cScore)
{
    if (cScore >= 90)
        return "A.";
    else if (cScore >= 80)
        return "B.";
    else if(cScore >= 70)
        return "C.";
    else if (cScore >= 60)
        return "D.";
    else
        return "F.";
}
