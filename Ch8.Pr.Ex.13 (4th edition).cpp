#include <iostream>

using namespace std;

const int ROWS = 4;
const int COLUMNS = 4;
const int LIST_SIZE = 16;

void createArithmeticSeq(int List[], int l_size);
void matricize(int List[], int Matrix[][4], int rows);
void reverseDiagonal(int Matrix[][4], int rows);
void magicCheck(int List[], int Matrix[][4], int l_size, int rows);
void printMatrix(int Matrix[][4], int rows);

int main()
{
    int list[LIST_SIZE];
    int matrix[ROWS][COLUMNS];

    createArithmeticSeq(list, LIST_SIZE);
    cout << endl;
    matricize(list, matrix, ROWS);
    cout << endl;
    printMatrix(matrix, ROWS);
    cout << endl;
    reverseDiagonal(matrix, ROWS);
    cout << endl;
    printMatrix(matrix, ROWS);
    cout << endl;
    magicCheck(list, matrix, LIST_SIZE, ROWS);

    return 0;
}

void createArithmeticSeq(int List[], int l_size)
{
    int first, diff;

    cout << "Please enter two numbers: " << endl;
    cin >> first >> diff;
    cout << endl;

    List[0] = first;

    for(int row = 1; row < l_size; row++)
    {
        List[row] = List[row - 1] + diff;
    }

    for(int row = 0; row < l_size; row++)
    {
        cout << List[row] << " ";
    }
}

void matricize(int List[], int Matrix[][4], int rows)
{
    int list_r = 0;

    cout << endl;
    for(rows = 0; rows < COLUMNS; rows++)
    {
        for(int col = 0; col < COLUMNS; col++)
        {
            Matrix[rows][col] = List[list_r];
            list_r++;
            cout << Matrix[rows][col] << " ";
        }
        cout << endl;
    }
}

void reverseDiagonal(int Matrix[][4], int rows)
{
    int m[4][4] = {0};

    for(int r = 0; r < rows; r++)
    {
        for(int c = 0; c < COLUMNS; c++)
        {
            m[r][c] = Matrix[r][c];
        }
    }

    for(int r = 0; r < rows; r++)
    {
        Matrix[3 - r][3 - r] = m[r][r];
    }

    for(int r = 3; r >= 0; r--)
    {
        Matrix[r][-1 * (r - 3)] = m[3 - r][r];
    }

    for(int r = 0; r < 4; r++)
    {
        for(int c = 0; c < 4; c++)
        {
            cout << Matrix[r][c] << " ";
        }
        cout << endl;
    }
}

void magicCheck(int List[], int Matrix[][4], int l_size, int rows)
{
    int magicNumber;
    int sum = 0;
    bool isMagic = true;
    int diagSum = 0;

    for(int i = 0; i < l_size; i++)
        sum = sum + List[i];


    cout << endl;
    cout << "Sum = " << sum << endl;
    magicNumber = static_cast<int>((static_cast<double>(sum) / 4.0));

    while (isMagic == true)
    {
    //Sum of each individual row
    for (int row = 0; row < rows; row++)
        {
            int rowSum = 0;
            for (int col = 0; col < rows; col++)
                {
                    rowSum = rowSum + Matrix[row][col];
                }
                if(rowSum != magicNumber)
                    {
                        isMagic = false;
                    }
        }
    //Sum of each individual column
    for (int col = 0; col < COLUMNS; col++)
        {
            int colSum = 0;
            for (int row = 0; row < rows; row++)
            {
                colSum = colSum + Matrix[row][col];
            }
            if(colSum != magicNumber)
                    {
                        isMagic = false;
                    }
        }

        for(int i = 0; i < 4; i++)
        {
            diagSum = diagSum + Matrix[i][i];
        }

        if(diagSum != magicNumber)
            isMagic = false;

        diagSum = 0;

        for(int i = 3; i >= 0; i--)
        {
            diagSum = diagSum + Matrix[i][i];
        }

        if(diagSum != magicNumber)
            isMagic = false;

        if(isMagic == true)
            break;
    }

    if(isMagic == true)
        cout << "It is a magic square" << endl;
    else if (isMagic == false)
        cout << "It is not a magic number" << endl;

}

void printMatrix(int Matrix[][4], int rows)
{
    for(int r = 0; r < rows; r++)
    {
        for(int c = 0; c < COLUMNS; c++)
        {
            cout << Matrix[r][c] << " ";
        }
        cout << endl;
    }
}

