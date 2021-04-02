#include <iostream>
#include <cstdlib>

using namespace std;

void random(int BOARD[20][20]);
void print(const int BOARD[20][20]);
void peak(const int BOARD[20][20]);

int main()
{
    int board[20][20] = {0};

//    board[2][5] = 2;
//    board[2][8] = -3;

    random(board);
    print(board);

    cout << endl;
    cout << "RESULT" << endl;

    peak(board);

    return 0;
}

void random(int BOARD[20][20])
{
    for(int row = 0; row < 20; row++)
    {
        for(int col = 0; col < 20; col++)
        {
            BOARD[row][col] = rand() % 7;
        }
    }
}

void print(const int BOARD[20][20])
{
    for(int row = 0; row < 20; row++)
    {
        for(int col = 0; col < 20; col++)
        {
            cout << BOARD[row][col] << " ";
        }
        cout << endl;
    }
}

void peak(const int BOARD[20][20])
{
    for(int row = 0; row < 20; row++)
    {
        for(int col = 0; col < 20; col++)
        {
            bool maxPeak = true;
            bool minPeak = true;

            for(int rows = row - 1; rows < row + 2; rows++)
            {
                for(int column = col - 1; column < col + 2; column++)
                {
                    if ((rows >= 0 && rows < 20) && (column >= 0 && column < 20))
                    {
                        if(BOARD[rows][column] == BOARD[row][col])
                        {
                            maxPeak = false;
                            minPeak = false;
                        }
                        else if (BOARD[rows][column] > BOARD[row][col])
                        {
                            maxPeak = false;
                        }
                        else if (BOARD[rows][column] < BOARD[row][col])
                        {
                            minPeak = false;
                        }
                    }
                    if (rows == row && column == col)
                    {
                        maxPeak = true;
                        minPeak = true;
                    }
                }
            }
                        if (maxPeak == true)
                        {
                            cout << BOARD[row][col] << " is a maximum peak. Location: [" << row << "][" << col << "]" << endl;

                        }

                        if (minPeak == true)
                        {
                            cout << BOARD[row][col] << " is a minimum peak. Location: [" << row << "][" << col << "]" << endl;
                        }

        }
    }
}
