#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct yards
{
    int noOfPassingYards;
    int noOfReceivingYards;
    int noOfRushingYards;
};

struct footballPlayer
{
    string name;
    int position;
    int noOfTouchdowns;
    int noOfCatches;
    yards yardData;
};

void input(ifstream& inFile, footballPlayer Team[]);
void output(footballPlayer Team[]);
void update(footballPlayer Team[], ofstream& outFile);

int main()
{
    ifstream infile;
    ofstream outfile;
    footballPlayer team[10];

    input(infile, team);
    output(team);
    update(team, outfile);

    return 0;
}

void input(ifstream& inFile, footballPlayer Team[])
{
    inFile.open("C:\\C++\\Ch9_Ex7Data.txt");

    if(!inFile)
    {
        cout << "Cannot open a file. " << endl;
    }

    for(int i = 0; i < 10; i++)
    {
        inFile >> Team[i].name >> Team[i].position;
        inFile >> Team[i].noOfTouchdowns >> Team[i].noOfCatches;
        inFile >> Team[i].yardData.noOfPassingYards;
        inFile >> Team[i].yardData.noOfReceivingYards;
        inFile >> Team[i].yardData.noOfRushingYards;
    }

    inFile.close();
}

void output(footballPlayer Team[])
{
    for(int i = 0; i < 10; i++)
    {
        cout << Team[i].name << " ";
        cout << Team[i].position << " ";
        cout << Team[i].noOfTouchdowns << " ";
        cout << Team[i].noOfCatches << " ";
        cout << Team[i].yardData.noOfPassingYards << " ";
        cout << Team[i].yardData.noOfReceivingYards << " ";
        cout << Team[i].yardData.noOfRushingYards << endl;
    }
}

void update(footballPlayer Team[], ofstream& outFile)
{
    int choice;
    int index;
    int answer;

    cout << endl;

    cout << "Select the player's index for update: ";
    cin >> index;
    cout << endl;

    cout << "What would you like to do with a player's data? " << endl;
    cout << "Select corresponding action number." << endl;
    cout << "1: Update player's position" << endl;
    cout << "2: Update number of touchdowns" << endl;
    cout << "3: Update number of catches" << endl;
    cout << "4: Update number of passing yards" << endl;
    cout << "5: Update number of receiving yards" << endl;
    cout << "6: Update number of rushing yards" << endl;
    cout << "-1: Exit" << endl;

    while(choice != -1)
    {
        cout << "Choice: ";
        cin >> choice;

        cout << "Save the changes to the file? (yes = 1, no = 0)";
        cin >> answer;

        if(answer == 1)
        {
            outFile >>
        }
        switch(choice)
        {
        case 1:
            cout << "Enter new value: ";
            cin >> Team[index - 1].position;
            cout << endl;
            output(Team);
            break;
        case 2:
            cout << "Enter new value: ";
            cin >> Team[index - 1].noOfTouchdowns;
            cout << endl;
            output(Team);
            break;
        case 3:
            cout << "Enter new value: ";
            cin >> Team[index - 1].noOfCatches;
            cout << endl;
            output(Team);
            break;
        case 4:
            cout << "Enter new value: ";
            cin >> Team[index - 1].yardData.noOfPassingYards;
            cout << endl;
            output(Team);
            break;
        case 5:
            cout << "Enter new value: ";
            cin >> Team[index - 1].yardData.noOfReceivingYards;
            cout << endl;
            output(Team);
            break;
        case 6:
            cout << "Enter new value: ";
            cin >> Team[index - 1].yardData.noOfRushingYards;
            cout << endl;
            output(Team);
            break;
        default:
            cout << "Wrong input value entered!" << endl;
        }
    }
}
