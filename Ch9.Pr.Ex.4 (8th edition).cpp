#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct menuItemType
{
    string menuItem;
    double menuPrice;
};

void getData(ifstream &inFile, menuItemType MENU[]);
void showMenu(menuItemType MENU[]);
void selection(int Choice[]);
void printCheck(menuItemType MENU[], int Choice[]);

int main()
{
    menuItemType menu[8];
    ifstream infile;
    int choice[8] = {0};

    getData(infile, menu);
    showMenu(menu);
    selection(choice);
    printCheck(menu, choice);

    return 0;
}

void getData(ifstream &inFile, menuItemType MENU[])
{
    inFile.open("C:\\C++\\Ch9_Ex4Data.txt");

    if(!inFile)
    {
        cout << "Cannot open a file. " << endl;
    }
    for(int i = 0; i < 8; i++)
    {
        getline(inFile, MENU[i].menuItem);
    }

    inFile.close();
    inFile.clear();

    inFile.open("C:\\C++\\Ch9_Ex4Data.2.txt");

    for(int i = 0; i < 8; i++)
    {
        inFile >> MENU[i].menuPrice;
    }
}

void showMenu(menuItemType MENU[])
{
    cout << "This is Johnny's Restaurant." << endl;
    cout << "We provide wide variety of breakfast options to our customers." << endl;
    cout << endl;
    cout << "Select the options by number. Multiple selection is available. " << endl;

    cout << fixed << showpoint << setprecision(2);

    for(int i = 0; i < 8; i++)
    {
        cout << i + 1 << ": " << MENU[i].menuItem << " $" << MENU[i].menuPrice << endl;
    }

    cout << endl;
}

void selection(int Choice[])
{
    int sentinel = -99;
    int answer;

    cout << "Enter choices separated with enter key: " << endl;
    cout << "To quit enter -99. " << endl;
    do
    {
        cin >> answer;
        switch(answer)
        {
        case 1:
            Choice[answer - 1] = 1;
            break;
        case 2:
            Choice[answer - 1] = 1;
            break;
        case 3:
            Choice[answer - 1] = 1;
            break;
        case 4:
            Choice[answer - 1] = 1;
            break;
        case 5:
            Choice[answer - 1] = 1;
            break;
        case 6:
            Choice[answer - 1] = 1;
            break;
        case 7:
            Choice[answer - 1] = 1;
            break;
        case 8:
            Choice[answer - 1] = 1;
            break;
        case -99:
            break;
        default:
            cout << "Wrong input entered!" << endl;
        }
    }
    while(answer != sentinel);

    cout << endl;
}

void printCheck(menuItemType MENU[], int Choice[])
{
    double sum = 0;
    double tax = 0;

    cout << "Welcome to Johnny's Restaurant" << endl;

    for(int index = 0; index < 8; index++)
    {
        if(Choice[index] == 1)
        {
            sum = sum + MENU[index].menuPrice;
            cout << MENU[index].menuItem;
            cout << right << "   $" << MENU[index].menuPrice << endl;
        }
    }
    tax = sum * 0.05;
    sum = sum + tax;

    cout << "Tax $" << tax << endl;
    cout << "Amount Due $" << sum << endl;
}
