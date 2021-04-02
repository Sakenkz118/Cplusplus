#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main ()
{
    ifstream inFile;
    double box, sideline, premium, generalAdmission;
    int numberOfTicketsSold1, numberOfTicketsSold2, numberOfTicketsSold3, numberOfTicketsSold4;
    int totalTicketsSold = 0;
    double totalSale = 0;

    cout << fixed << showpoint << setprecision(2);

    inFile.open("c:\\C++\\sample.txt");

    inFile >> box >> numberOfTicketsSold1;
    inFile >> sideline >> numberOfTicketsSold2;
    inFile >> premium >> numberOfTicketsSold3;
    inFile >> generalAdmission >> numberOfTicketsSold4;

    totalTicketsSold = numberOfTicketsSold1 + numberOfTicketsSold2 + numberOfTicketsSold3 + numberOfTicketsSold4;
    totalSale = numberOfTicketsSold1 * box + numberOfTicketsSold2 * sideline + numberOfTicketsSold3 * premium + numberOfTicketsSold4 * generalAdmission;

    cout << "The total number of tickets sold: " << totalTicketsSold << endl;
    cout << "Total sales: $" << totalSale << endl;

    inFile.close();

    return 0;
}
