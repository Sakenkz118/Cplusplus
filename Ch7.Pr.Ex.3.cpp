#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//Function prototypes
void initialize(int& zeroCount, int& oddCount, int& evenCount);
void getNumber(int& num);
void classifyNumber(int num, int& zeroCount, int& oddCount,int& evenCount);
void printResults(int zeroCount, int oddCount, int evenCount, int sum, double average);

ifstream inFile;
ofstream outFile;

int main()
{
    //Variable declaration
    int number; //variable to store the new number
    int zeros; //variable to store the number of zeros
    int odds; //variable to store the number of odd integers
    int evens; //variable to store the number of even integers
    int sum = 0;
    double average = 0;

    //Open the files
    inFile.open("c:\\C++\\Ch7_Ex3Data.txt"); //open the input file
    outFile.open("c:\\C++\\Ch7_Ex3Output.txt"); //open the output file

    cout << "Processing data" << endl;

    initialize(zeros, odds, evens); //Step 1

    int j = 0;

    while(inFile)
        {
            getNumber(number); //Step 3a
            sum = sum + number;
            classifyNumber(number, zeros, odds, evens); //Step 3c
            j++;
        } // end for loop

    outFile << endl;

    average = static_cast<double>(sum) / static_cast<double>(j);

    printResults(zeros, odds, evens, sum, average); //Step 4

    inFile.close();
    outFile.close();

    return 0;
}
void initialize(int& zeroCount, int& oddCount, int& evenCount)
{
    zeroCount = 0;
    oddCount = 0;
    evenCount = 0;
}
void getNumber(int& num)
{
    static int i = 0;
    inFile >> num;
    outFile << num << " ";
    i++;
    if(i == 10)
    {
        outFile << "\n";
        i = 0;
    }
}
void classifyNumber(int num, int& zeroCount, int& oddCount, int& evenCount)
{
    switch (num % 2)
    {
        case 0:
            evenCount++;
            if (num == 0)
            zeroCount++;
        break;
        case 1:
        case -1:
            oddCount++;
    } //end switch
} //end classifyNumber
void printResults(int zeroCount, int oddCount, int evenCount, int sum, double average)
{
    outFile << "There are " << evenCount << " evens, " << "which includes " << zeroCount << " zeros" << endl;
    outFile << "The number of odd numbers is: " << oddCount << endl;
    outFile << "Sum = " << sum << endl;
    outFile << "Average = " << average << endl;
} //end printResults
