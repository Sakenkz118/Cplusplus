#include <iostream>
#include <cstdlib>

using namespace std;

void random(int BOARD[3][3]);
void print(const int BOARD[3][3]);
bool check(const int BOARD[3][3]);

int main()
{
    int magic[3][3];
    int counter = 0;
    int countMagic = 0;

    while(counter <= 1'000'000)
    {
        random(magic);
//        print(magic);
        if(check(magic) == true)
            countMagic++;
        counter++;
    }

    cout << "The number of times magic square occurred: " << countMagic << endl;
    return 0;
}

void random(int BOARD[3][3])
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            BOARD[row][col] = rand() % 9 + 1;
        }
    }
}

void print(const int BOARD[3][3])
{
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << BOARD[row][col] << " ";
        }
        cout << endl;
    }
}

bool check(const int BOARD[3][3])
{
    int sum = 0;
    int magicNumber;
    bool isMagic = true;
    const int NUMBER_OF_ROWS = 3;
    const int NUMBER_OF_COLUMNS = 3;
    int diagSum = 0;

    for(int row = 0; row < NUMBER_OF_ROWS; row++)
    {
        for(int col = 0; col < NUMBER_OF_COLUMNS; col++)
        {
            sum = sum + BOARD[row][col];
        }
    }
//    cout << endl;
//    cout << "Sum = " << sum << endl;

    magicNumber = static_cast<int>((static_cast<double>(sum) / 3.0));

//    cout << "Magic number: " << magicNumber << endl;

    while (isMagic == true)
    {
    //Sum of each individual row
    for (int row = 0; row < NUMBER_OF_ROWS; row++)
        {
            int rowSum = 0;
            for (int col = 0; col < NUMBER_OF_COLUMNS; col++)
                {
                    rowSum = rowSum + BOARD[row][col];
                }
                if(rowSum != magicNumber)
                    {
                        isMagic = false;
                    }
        }
    //Sum of each individual column
    for (int col = 0; col < NUMBER_OF_COLUMNS; col++)
        {
            int colSum = 0;
            for (int row = 0; row < NUMBER_OF_ROWS; row++)
            {
                colSum = colSum + BOARD[row][col];
            }
            if(colSum != magicNumber)
                    {
                        isMagic = false;
                    }
        }

        for(int i = 0; i < 3; i++)
        {
            diagSum = diagSum + BOARD[i][i];
        }

        if(diagSum != magicNumber)
            isMagic = false;

        diagSum = 0;

        for(int i = 2; i >= 0; i--)
        {
            diagSum = diagSum + BOARD[i][i];
        }

        if(diagSum != magicNumber)
            isMagic = false;

        if(isMagic == true)
            break;
    }

    return isMagic;
/*
    cout << endl;
    if(isMagic == true)
        cout << "3x3 array is a MAGIC square." << endl;
    else if(isMagic == false)
        cout << "3x3 array is NOT a MAGIC square." << endl;
*/
}
