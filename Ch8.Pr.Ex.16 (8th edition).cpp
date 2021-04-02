#include <iostream>
#include <cstdlib>

using namespace std;

void intro();
void random(int BOARD[]);
void print(const int arrayValue[]);
void input(int choice[]);
void compare(const int BOARD[], const int choice[]);

int main()
{
    int pick5Loto[5];
    int userChoice[5] = {0};

    intro();
    random(pick5Loto);
    print(pick5Loto);
    while(cin)
        {
            input(userChoice);
            compare(pick5Loto, userChoice);
        }

    return 0;
}

void intro()
{
    cout << "This is Pick 5 Lotto game simulation:-) " << endl;
    cout << "Rules: " << endl;
    cout << "Program randomly generates 5 numbers. You have to guess it" << endl;
}

void random(int BOARD[])
{
    for(int row = 0; row < 5; row++)
    {
        BOARD[row] = rand() % 9 + 1;
    }
}

void print(const int arrayValue[])
{
    for(int i = 0; i < 5; i++)
    {
        cout << arrayValue[i] << " ";
    }
    cout << endl;
}

void input(int choice[])
{
    cout << "Please enter 5 numbers between 1 and 9 inclusively: " << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> choice[i];
    }
}

void compare(const int BOARD[], const int choice[])
{
    int result[5] = {0};
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        if(BOARD[i] == choice[i])
        {
            result[i] = 1;
        }
    }

    cout << endl;

    for(int j = 0; j < 5; j++)
    {
        sum = sum + result[j];
    }

    if (sum == 5)
        cout << "Congratulations! You are Pick 5 Lotto winner." << endl;
    else
    {
    cout << "Match occurred: " << endl;

    for(int i = 0; i < 5; i++)
    {
        if(result[i] == 1)
            cout << choice[i] << " ";
        else
            cout << "X ";
    }
    }

    cout << endl;
}
