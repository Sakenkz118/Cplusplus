#include <iostream>

using namespace std;

class ticTacToe
{
public:
    void gameRules() const;
    // Function to print a game rules
    // Postcondition: game rules are displayed

    void print() const;
    // Function to print the current board
    // Postcondition: board is printed and displayed

    void getMoveX(int ch);
    // Function to get a move values
    // Postcondition: mapping between mini squares and array coordinates;

    void getMoveO(int ch);
    // Function to get a move values
    // Postcondition: mapping between mini squares and array coordinates;

    bool getStatus() const;
    // Function to get the game status
    // Postcondition: game status is returned, true or false

    void changeStatus();
    // Function to update game status
    // Postcondition: game status is updated accordingly

    bool getValidMove() const;
    // Function to get the move status
    // Postcondition: move status is returned, true or false

    bool checkTie();
    // Function for checking draw condition
    // Postcondition: if draw is present, inform players

    bool getDrawStatus() const;
    // Function to return the draw status
    // Postcondition: draw status is returned

    ticTacToe(); // default constructor

private:
    char board[3][3];
    bool isValidMove;
    bool isGameOver;
    bool isDraw;
};

int main()
{
    ticTacToe game;
    int choice;

    game.gameRules();

    while(!game.getStatus() && !game.getDrawStatus())
    {
    cout << "Player 1 (X), please enter a choice, 1-9: ";
    cin >> choice;
    cout << endl;

    game.getMoveX(choice);
    game.checkTie();
    game.print();
    game.changeStatus();

    if(game.getStatus() == false)
    {
    cout << "Player 2 (O), please enter a choice, 1-9: ";
    cin >> choice;
    cout << endl;

    game.getMoveO(choice);
    game.checkTie();
    game.print();
    game.changeStatus();

    if(game.getStatus() == true && game.getDrawStatus() == false)
        cout << "Winner is Player 2 (O)! Congratulations! Well done." << endl;
    }
    else if(game.getDrawStatus() == false)
        cout << "Winner is Player 1 (X)! Congratulations! Well done." << endl;
    }

    if(game.getDrawStatus() == true)
        cout << "This is Draw! Nobody won." << endl;

    return 0;
}

ticTacToe::ticTacToe()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = '-';
        }
    }
    isValidMove = true;
    isGameOver = false;
    isDraw = false;
}

void ticTacToe::gameRules() const
{
    cout << "This is two player a tic-tac game. Rules are the following: " << endl;
    cout << "The object of Tic Tac Toe is to get three in a row." << endl;
    cout << "You play on a three by three game board." << endl;
    cout << "The first player is known as X and the second is O." << endl;
    cout << "Players alternate placing Xs and Os on the game board until either opponent has three in a row " << endl;
    cout << "or all nine squares are filled." << endl;
    cout << "X always goes first, and in the event that no one has three in a row," << endl;
    cout << "the stalemate is called a cat game." << endl;
    cout << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    cout << endl;

    cout << "Choose a number below denoting mini square for a move." << endl;

    int k = 1;
    for(int i = 0; i < 3; i++)
    {

        for(int j = 0; j < 3; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    cout << endl;
}

void ticTacToe::print() const
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "  ";
        }
        cout << endl;
    }
}

void ticTacToe::getMoveX(int ch)
{
    int row, col;
    isValidMove = true;

    do
    {
        switch(ch)
        {
            case 1:
                row = 0;
                col = 0;
                isValidMove = true;
                break;
            case 2:
                row = 0;
                col = 1;
                isValidMove = true;
                break;
            case 3:
                row = 0;
                col = 2;
                isValidMove = true;
                break;
            case 4:
                row = 1;
                col = 0;
                isValidMove = true;
                break;
            case 5:
                row = 1;
                col = 1;
                isValidMove = true;
                break;
            case 6:
                row = 1;
                col = 2;
                isValidMove = true;
                break;
            case 7:
                row = 2;
                col = 0;
                isValidMove = true;
                break;
            case 8:
                row = 2;
                col = 1;
                isValidMove = true;
                break;
            case 9:
                row = 2;
                col = 2;
                isValidMove = true;
                break;
            default:
            {
                cout << "Wrong input entered! Try again. " << endl;
            }
        }
        if(board[row][col] != '-')
            {
                cout << "Wrong input entered! It was already chosen before! Try again. " << endl;
            }
        else
            {
                isValidMove = true;
                board[row][col] = 'X';
            }
    }
    while(!isValidMove);

}

void ticTacToe::getMoveO(int ch)
{
    int row, col;
    isValidMove = true;

    do
    {
        switch(ch)
        {
            case 1:
                row = 0;
                col = 0;
                isValidMove = true;
                break;
            case 2:
                row = 0;
                col = 1;
                isValidMove = true;
                break;
            case 3:
                row = 0;
                col = 2;
                isValidMove = true;
                break;
            case 4:
                row = 1;
                col = 0;
                isValidMove = true;
                break;
            case 5:
                row = 1;
                col = 1;
                isValidMove = true;
                break;
            case 6:
                row = 1;
                col = 2;
                isValidMove = true;
                break;
            case 7:
                row = 2;
                col = 0;
                isValidMove = true;
                break;
            case 8:
                row = 2;
                col = 1;
                isValidMove = true;
                break;
            case 9:
                row = 2;
                col = 2;
                isValidMove = true;
                break;
            default:
            {
                cout << "Wrong input entered! Try again. " << endl;
            }
        }
        if(board[row][col] != '-')
            {
                cout << "Wrong input entered! It was already chosen before! Try again. " << endl;
            }
        else
            {
                isValidMove = true;
                board[row][col] = 'O';
            }
    }
    while(!isValidMove);
}

bool ticTacToe::getStatus() const
{
    return isGameOver;
}

void ticTacToe::changeStatus()
{
    // row processing

    for(int row = 0; row < 3; row++)
    {
    if((board[row][0] == board[row][1]) && (board[row][1] == board[row][2]))
    {
        if((board[row][2] == 'X') || (board[row][2] == 'O'))
        {
        isGameOver = true;
        }
    }
    }

    if(isGameOver != true)
    {
    // column processing
    for(int col = 0; col < 3; col++)
    {
    if((board[0][col] == board[1][col]) && (board[0][col] == board[2][col]))
    {
        if((board[0][col] == 'X') || (board[0][col] == 'O'))
        {
        isGameOver = true;
        break;
        }
    }
    }
    }

    if(isGameOver != true)
    {
        if((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
            if((board[0][0] == 'X') || (board[0][0] == 'O'))
            isGameOver = true;
    }

    if(isGameOver != true)
    {
        if((board[2][0] == board[1][1]) && (board[2][0] == board[0][2]))
        {
            if((board[2][0] == 'X') || (board[2][0] == 'O'))
                isGameOver = true;
        }
    }
    if(isGameOver == true)
        cout << "Game Over!" << endl;
}

bool ticTacToe::getValidMove() const
{
    return isValidMove;
}

bool ticTacToe::checkTie()
{
    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != '-')
                sum++;
        }
    }

    if(sum == 9)
        isDraw = true;
}

bool ticTacToe::getDrawStatus() const
{
    return isDraw;
}
