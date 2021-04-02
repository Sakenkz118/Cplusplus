#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
    ifstream inFile;
    ofstream outFile;

    string firstName, lastName, department;
    double salary, paycheck, bonus, tax;
    double distance, time;
    int cupsSold;
    double priceCups;

    inFile.open("c:\\C++\\inData.txt");
    outFile.open("c:\\C++\\outData.txt");

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    cout << "Processing data" << endl;

    inFile >> firstName >> lastName >> department;
    inFile >> salary >> bonus >> tax;
    inFile >> distance >> time;
    inFile >> cupsSold >> priceCups;

    outFile << "Name: " << firstName << " " << lastName;
    outFile << ", Department: " << department << endl;

    outFile << "Monthly Gross Salary: $" << salary
            << ", Monthly Bonus: " << bonus << "%, Taxes: "
            << tax << "%" << endl;
    paycheck = (salary * (1 + bonus / 100)) * (1 - tax/100);
    outFile << "Paycheck: $" << paycheck << endl;
    outFile << endl;

    outFile << "Distance Traveled: " << distance << " miles, "
            << "Traveling Time: " << time << " hours" << endl;
    outFile << "Average Speed: " << distance / time << " miles per hour";
    outFile << endl;
    outFile << endl;

    outFile << "Number of Coffee Cups Sold: " << cupsSold << ", Cost: $"
            << priceCups << " per cup" << endl;
    outFile << "Sales Amount = $" << cupsSold * priceCups << endl;

    inFile.close();
    outFile.close();

    return 0;
}
