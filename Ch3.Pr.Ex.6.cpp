#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
    ifstream inFile;
    ofstream outFile;

    string firstName1, lastName1;
    double baseSalary1, promotedSalary1;
    double promoRise1;

    string firstName2, lastName2;
    double baseSalary2, promotedSalary2;
    double promoRise2;

    string firstName3, lastName3;
    double baseSalary3, promotedSalary3;
    double promoRise3;

    inFile.open("c:\\C++\\Ch3_Ex6Data.txt");
    outFile.open("c:\\C++\\Ch3_Ex6Output.dat");

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    cout << "Processing data" << endl;

    inFile >> lastName1 >> firstName1
           >> baseSalary1 >> promoRise1;

    inFile >> lastName2 >> firstName2
           >> baseSalary2 >> promoRise2;

    inFile >> lastName3 >> firstName3
           >> baseSalary3 >> promoRise3;

    promotedSalary1 = baseSalary1 * (1 + promoRise1/100);
    promotedSalary2 = baseSalary2 * (1 + promoRise2/100);
    promotedSalary3 = baseSalary3 * (1 + promoRise3/100);

    outFile << firstName1 << " " << lastName1;
    outFile << " " << promotedSalary1 << endl;

    outFile << firstName2 << " " << lastName2;
    outFile << " " << promotedSalary2 << endl;

    outFile << firstName2 << " " << lastName3;
    outFile << " " << promotedSalary3 << endl;

    inFile.close();
    outFile.close();

    return 0;
}
