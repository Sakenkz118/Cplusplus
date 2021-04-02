#include <iostream>

using namespace std;

void inputArray(int ALPHA[]);
void doubleArray(int BETA[], const int ALPHA[]);
void copyAlphaBeta(const int ALPHA[], const int BETA[], int MATRIX[][4]);
void printArray(int print[]);

int main ()
{
    int alpha[20] = {0};
    int beta[20] = {0};
    int matrix[10][4] = {0};

    inputArray(alpha);
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

    printArray(alpha);
    cout << endl;
    printArray(beta);

    return 0;
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

void printArray(int print[])
{
    for (int i = 0; i < 20; i++)
    {
        cout << print[i];
        if (i == 14)
            cout << endl;

    }
    cout << endl;
}
