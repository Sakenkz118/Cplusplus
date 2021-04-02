#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void openFiles(ifstream&, ofstream&);
void initialize(int&, int&, double&, double&);
void sumGrades(ifstream&, double&, double&, int&, int&);
void averageGrade(ifstream& inp, double& sumFemaleGPA, double& sumMaleGPA, int& femaleCount, int& maleCount, double& averageFemale, double& averageMale);
void printResults(ofstream& out, int FemaleCount, int MaleCount, double AverageFemale, double AverageMale);

int main ()
{
    ifstream inFile;
    ofstream outFile;
    int noOfFemale, noOfMale;
    double femaleGPAsum, maleGPAsum;
    double avgFemale, avgMale;

    openFiles(inFile, outFile);

    if (!inFile) //Step 3
        {
            cout << "Unable to open file." << endl;
            cout << "Program terminates." << endl;
            return 1;
        }

    initialize(noOfFemale, noOfMale, femaleGPAsum, maleGPAsum);

    sumGrades(inFile, femaleGPAsum, maleGPAsum, noOfFemale, noOfMale);

    averageGrade(inFile, femaleGPAsum, maleGPAsum, noOfFemale, noOfMale, avgFemale, avgMale);

    printResults(outFile, noOfFemale, noOfMale, avgFemale, avgMale);

    cout << "Processing data" << endl;

    inFile.close();
    outFile.close();

    return 0;
}

void openFiles(ifstream& input, ofstream& output)
{
    input.open("c:\\C++\\Ch7_Ex4Data.txt"); //open the input file
    output.open("c:\\C++\\Ch7_Ex4Output.txt"); //open the output file
}

void initialize(int& countFemale, int& countMale, double& sumFemaleGPA, double& sumMaleGPA)
{
    countFemale = 0;
    countMale = 0;
    sumFemaleGPA = 0;
    sumMaleGPA = 0;
}

void sumGrades(ifstream& inp, double& sumFemaleGPA, double& sumMaleGPA, int& femaleCount, int& maleCount)
{
    double gpa;
    char gender;

    inp >> gender;
    while(inp)
    {
        if(gender == 'f')
        {
            inp >> gpa;
            sumFemaleGPA = sumFemaleGPA + gpa;
            femaleCount++;
        }
        else if (gender == 'm')
        {
            inp >> gpa;
            sumMaleGPA = sumMaleGPA + gpa;
            maleCount++;
        }
            inp >> gender;
    }
}

void averageGrade(ifstream& inp, double& sumFemaleGPA, double& sumMaleGPA, int& femaleCount, int& maleCount, double& averageFemale, double& averageMale)
{
    averageFemale = sumFemaleGPA / femaleCount;
    averageMale = sumMaleGPA / maleCount;
}

void printResults(ofstream& out, int FemaleCount, int MaleCount, double AverageFemale, double AverageMale)
{
    out << fixed << showpoint << setprecision(2);
    out << "Number of female students: " << FemaleCount << endl;
    out << "Number of male students: " << MaleCount << endl;
    out << "Average GPA for females: " << AverageFemale << endl;
    out << "Average GPA for males: " << AverageMale << endl;
}
