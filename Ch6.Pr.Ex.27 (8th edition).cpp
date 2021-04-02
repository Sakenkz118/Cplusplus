#include <iostream>

using namespace std;

void displayChoices();
void getInput(int&, int&, int&, bool&);
void convert_to_24H(int&, bool);
void convert_to_12H(int&, bool&);
void displayResults(int, int);
void AMtoPM(bool);

int main ()
{
    int choice;
    int hour, minute;
    bool isPM = false;

    do
    {
        displayChoices();
        getInput(choice, hour, minute, isPM);
        if(choice == 1)
        {
            convert_to_12H(hour, isPM);
            displayResults(hour, minute);
            AMtoPM(isPM);
        }
        else if (choice == 2)
        {
            convert_to_24H(hour, isPM);
            displayResults(hour, minute);
            cout << endl;
            cout << endl;
        }
    }
    while (choice != 99);

    return 0;
}

void displayChoices()
{
    cout << "Enter--" << endl;
    cout << "1: To convert the time from 24-hour notation to 12-hour notation. " << endl;
    cout << "2: To convert the time from 12-hour notation to 24-hour notation. " << endl;
    cout << "99: To quit the program." << endl;
}

void getInput(int& userChoice, int& h, int& m, bool& afternoon)
{
    cin >> userChoice;

    switch(userChoice)
    {
        case 1:
        cout << "Enter time (hour and minute): ";
        cin >> h >> m;
        cout << endl;

        if (h > 23 || m > 60 || h < 0 || m < 0)
            cout << "Wrong value(s) entered! " << endl;

        break;

        case 2:
        cout << "Enter time (hour and minute): ";
        cin >> h >> m;
        cout << endl;

        if (h > 12 || m > 60 || h < 0 || m < 0)
            cout << "Wrong value(s) entered! " << endl;
        else
            {
                cout << "If AM choose 0, otherwise choose 1 for PM: ";
                cin >> afternoon;
                cout << endl;
            }
        break;

        case 99:
            break;
        default:
            {
            cout << "Invalid input." << endl;
            cout << endl;
            }
    }
}

void convert_to_24H(int& h, bool pm)
{
    if (pm == true)
        h = h + 12;
    else if (pm == false)
        h = h;
}

void convert_to_12H(int& h, bool& isPM)
{
    if (h > 12)
        {
          h = h - 12;
          isPM = true;
        }
    else if (h < 12)
        {
          h = h;
          isPM = false;
        }
}

void displayResults(int h, int m)
{
    cout << "Converted time: " << h << ":";
    if (m < 10)
        cout << "0" << m;
    else
        cout << m;
}

void AMtoPM(bool isPM)
{
    if(isPM == false)
        cout << "AM" << endl;
    else if(isPM == true)
        cout << "PM" << endl;

    cout << endl;
}
