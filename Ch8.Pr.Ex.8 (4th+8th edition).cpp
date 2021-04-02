#include <iostream>

using namespace std;

void setZero(int zero[], int listSize);
void inputArray(int ALPHA[]);
void doubleArray(int BETA[], const int ALPHA[]);
void copyAlphaBeta(const int ALPHA[], const int BETA[], int MATRIX[][4]);
void printArray(int print[], int Size);
void copyGamma(int gammaCopy[][4], const int gamma[]);
void setInStock(int setStock[][4], int Delta[]);

int main ()
{
    int alpha[20] = {1, 45, 56, 77, 66, 77};
    int beta[20] = {1, 2, 3, 4, 5, 6, 7};
    int matrix[10][4] = {0};
    int inStock[10][4];
    int gamma[4] = {11, 13, 15, 17};
    int delta[10] = {3, 5, 2, 6, 10, 9, 7, 11, 1, 8};

 /*   inputArray(alpha);
    cout << endl;
    cout << endl;
    cout << "RESULTS" << endl;
    cout << "Elements of alpha array: " << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << alpha[i] << " ";
    }

    doubleArray(beta,alpha);
    cout << endl;
    cout << "Elements of beta array: " << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << beta[i] << " ";
    }

    copyAlphaBeta(alpha,beta,matrix);
    cout << endl;
    cout << "Elements of matrix array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
*/
//    setZero(gamma, 4);
//    setZero(delta, 10);
    printArray(gamma, 4);
    cout << endl;
    printArray(delta, 10);

    cout << endl;

    copyGamma(inStock, gamma);
    for(int row = 0; row < 10; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            cout << inStock[row][col] << " ";
        }
        cout << endl;

    }
    cout << endl;
    setInStock(inStock, delta);

    return 0;
}

void setZero(int zero[], int listSize)
{
    int index;

    for (index = 0; index < listSize; index++)
        zero[index] = 0;
}

void inputArray(int ALPHA[])
{
    cout << "Please enter 20 numbers separated by space: " << endl;

    for (int i = 0; i < 20; i++)
    {
        cin >> ALPHA[i];
    }
}

void doubleArray(int BETA[], const int ALPHA[])
{
    for (int j = 0; j < 20; j++)
    {
        BETA[j] = 2 * ALPHA[j];
    }
}

void copyAlphaBeta(const int ALPHA[], const int BETA[], int MATRIX[][4])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            MATRIX[i][j] = ALPHA[i * 4 + j];
        }
    }

    for (int k = 5; k < 10; k++)
    {
        for (int l = 0; l < 4; l++)
        {
            MATRIX[k][l] = BETA[(k - 5) * 4 + l];
        }
    }
}

void printArray(int print[], int Size)
{
    for (int i = 0; i < Size; i++)
    {
        cout << print[i] << " ";
        if (i == 14)
            cout << endl;
    }
    cout << endl;
}

void copyGamma(int gammaCopy[][4], const int gamma[])
{
    for(int row = 0; row < 1; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            gammaCopy[row][col] = gamma[col];
        }

    }

    for(int row = 1; row < 10; row++)
    {

        for(int col = 0; col < 4; col++)
        {
            gammaCopy[row][col] = 3 * gammaCopy[row - 1][col];
        }

    }
}

void setInStock(int setStock[][4], int Delta[])
{
    cout << "Please enter the elements for the first column of inStock: " << endl;

    for(int row = 0; row < 10; row++)
    {
        cin >> setStock[row][0];
    }

    for(int col = 1; col < 4; col++)
    {
       for(int row = 0; row < 10; row++)
       {
           setStock[row][col] = (2 * setStock[row][col - 1]) - Delta[row];
       }
    }

    cout << endl;
    for(int row = 0; row < 10; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            cout << setStock[row][col] << " ";
        }
        cout << endl;

    }
}
