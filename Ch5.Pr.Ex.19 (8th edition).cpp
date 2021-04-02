#include <iostream> //Line 1
#include <string> //Line 2
#include <iomanip> //Line 3
#include <fstream>

using namespace std; //Line 4

int main() //Line 6
{ //Line 7
    string name; //Line 8
    int numOfVolunteers; //Line 9
    int numOfBoxesSold; //Line 10
    int totalNumOfBoxesSold; //Line 11
    int maxOfBoxesSold = 0;
    double costOfOneBox; //Line 12
    ifstream infile;

    cout << fixed << showpoint << setprecision(2); //Line 13

    totalNumOfBoxesSold = 0; //Line 15
    numOfVolunteers = 0; //Line 16

    infile.open("c:\\C++\\Exp_5_18(8th).txt");
    if (!infile) //Line 17
    { //Line 18
            cout << "Cannot open input file. "
                 << "Program terminates!" << endl; //Line 19
    return 1; //Line 20
    }

    infile >> costOfOneBox;
    infile >> name; //Line 17

    while (!infile.eof()) //Line 18
        { //Line 19
            infile >> numOfBoxesSold; //Line 20
            if(maxOfBoxesSold < numOfBoxesSold)
                maxOfBoxesSold = numOfBoxesSold;
            totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold; //Line 21
            numOfVolunteers++; //Line 22
            infile >> name; //Line 23
        } //Line 24

        cout << endl; //Line 25
        cout << "The total number of boxes sold: " << totalNumOfBoxesSold << endl; //Line 26
        cout << "Enter the cost of one box: " << costOfOneBox; //Line 27
 //Line 28
        cout << endl; //Line 29
        cout << "The total money made by selling cookies: $" << totalNumOfBoxesSold * costOfOneBox << endl; //Line 30
        cout << "Max. no of boxes sold: " << maxOfBoxesSold << endl;
        cout << "Donation to charity: $" << maxOfBoxesSold * costOfOneBox * 0.1 << endl;

        if (numOfVolunteers != 0) //Line 31
            cout << "The average number of " << "boxes sold by each volunteer: "
                 << totalNumOfBoxesSold / numOfVolunteers << endl; //Line 32
        else //Line 33
            cout << "No input." << endl; //Line 34

        infile.close();

        return 0; //Line 35
} //Line 36

