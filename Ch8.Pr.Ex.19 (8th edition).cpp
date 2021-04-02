#include <iostream>
#include <iomanip>

using namespace std;

void initialize(char seats[][6]);
void input(char& ticket_type, char matrix[][6]);
void layout(char seats[][6]);
void seat_conversion(char seats[][6], int row, char seat_letter);

int main()
{
    char ticket_class;
    char seating_layout[13][6];

    initialize(seating_layout);
    layout(seating_layout);
    do
    {
        input(ticket_class, seating_layout);
    }
    while(ticket_class != 'q');

    return 0;
}

void initialize(char seats[][6])
{
    for(int row = 0; row < 13; row++)
    {
        for(int col = 0; col < 6; col++)
        {
            seats[row][col] = '*';
        }
    }
}
void layout(char seats[][6])
{
    cout << "Here, * indicates that the seat is available;";
    cout << " X indicates that the seat is occupied." << endl;
    cout << endl;

    cout << "        A  B  C  D  E  F" << endl;

    for(int row = 0; row < 13; row++)
    {
        cout << "Row " << setw(2) << left << row + 1 << "  ";
        for(int col = 0; col < 6; col++)
        {
            cout << seats[row][col] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

void seat_conversion(char seats[][6], int row, char seat_letter)
{
    if(seats[row - 1][static_cast<int>(seat_letter) - 65] == '*')
       seats[row - 1][static_cast<int>(seat_letter) - 65] = 'X';
    else
        cout << "Seat is NOT vacant. Choose different one." << endl;
}

void input(char& ticket_type, char matrix[][6])
{
    int row;
    char seat;

    cout << "Please enter ticket type: " << endl;
    cout << endl;
    cout << "F or f for First Class." << endl;
    cout << "B or b for Business Class." << endl;
    cout << "E or e for Economy Class." << endl;
    cout << endl;
    cout << "q to quit." << endl;
    cout << endl;
    cout << "Choice: ";
    cin >> ticket_type;
    cout << endl;

    switch(ticket_type)
    {
        case 'F':
        case 'f':
            cout << "Please choose a desired place from Rows 1 and 2: ";
            cout << "e.g. 1 A" << endl;
            cin >> row >> seat;

            if(row > 2 || row < 1)
            {
                cout << "Wrong row value for a class entered. Try again!" << endl;
                cout << "Row: ";
                cin >> row;
            }

            if(seat > 'F' || seat < 'A')
            {
                cout << "Wrong seat value entered. Try again!" << endl;
                cout << "Seat: ";
                cin >> seat;
            }
            seat_conversion(matrix, row, seat);
            layout(matrix);

            break;
        case 'B':
        case 'b':
            cout << "Please choose a desired place between Rows 3 and 7 inclusively. ";
            cout << "e.g. 3 F" << endl;
            cin >> row >> seat;

            if(row > 7 || row < 3)
            {
                cout << "Wrong row value for a class entered. Try again!" << endl;
                cout << "Row: ";
                cin >> row;
            }

            if(seat > 'F' || seat < 'A')
            {
                cout << "Wrong seat value entered. Try again!" << endl;
                cout << "Seat: ";
                cin >> seat;
            }
            seat_conversion(matrix, row, seat);
            layout(matrix);

            break;
        case 'E':
        case 'e':
            cout << "Please choose a desired place between Rows 8 and 13 inclusively. ";
            cout << "e.g. 10 C" << endl;
            cin >> row >> seat;

            if(row > 13 || row < 8)
            {
                cout << "Wrong row value for a class entered. Try again!" << endl;
                cout << "Row: ";
                cin >> row;
            }

            if(seat > 'F' || seat < 'A')
            {
                cout << "Wrong seat value entered. Try again!" << endl;
                cout << "Seat: ";
                cin >> seat;
            }
            seat_conversion(matrix, row, seat);
            layout(matrix);

            break;
        case 'q':
            break;
        default:
            cout << "Wrong ticket class entered. Try again. " << endl;
    }
}
