#include <iostream>
#include <fstream> // step a
#include <string>  // step a
#include <iomanip> // step a

using namespace std;

const double PI = 3.1416; // PI value

int main()
{
    ifstream inFile;  // step b
    ofstream outFile; // step b

    double length, width, areaRect, perimeter;       // Rectangle parameters

    double radius, areaCircle, circumference;        // Circle parameters

    string firstName, lastName;                    // Account Holder's data
    int age;                                         // Account Holder's data

    double startBalance, finalBalance, interestRate; // Financial details

    char letter;

    inFile.open("c:\\C++\\inData.txt");   // step c
    outFile.open("c:\\C++\\outData.txt"); // step c

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    cout << "Processing data" << endl;

    inFile >> length >> width;
    areaRect = length * width;
    perimeter = 2 * (length + width);
    outFile << "Rectangle: " << endl;
    outFile << "Length = " << length << ", width = " << width
            << ", area = " << areaRect << ", perimeter = " << perimeter;
    outFile << endl;
    outFile << endl;

    inFile >> radius;
    areaCircle = PI * (radius * radius);
    circumference = 2 * PI * radius;
    outFile << "Circle: " << endl;
    outFile << "Radius = " << radius << ", area = " << areaCircle
            << ", circumference = " << circumference << endl;
    outFile << endl;

    inFile >> firstName >> lastName >> age;
    outFile << "Name: " << firstName << " " << lastName << ", "
            << "age: " << age << endl;

    inFile >> startBalance >> interestRate;
    finalBalance = startBalance * (1 + interestRate / 100);
    outFile << "Beginning balance = $" << startBalance;
    outFile << ", interest rate = " << interestRate;
    outFile << endl;

    inFile >> letter;
    outFile << "The character that comes after " << letter
            << " in the ASCII set is B " << endl;

    inFile.close();  // step e
    outFile.close(); // step e

    return 0;
}
