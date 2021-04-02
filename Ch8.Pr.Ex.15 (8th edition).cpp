#include <iostream>
#include <fstream>

using namespace std;

void element2(const int fiftyInt[]);
void selectionSort(int list[], int length);

int main()
{
    int fiftyIntegers[50] = {0};
    ifstream infile;

    infile.open("C:\\C++\\Ch8_Ex14Data.txt");

    if(!infile)
    {
        cout << "Cannot open the input file." << endl;
        return 1;
    }

    cout << "...Processing..." << endl;
    cout << endl;

    for(int i = 0; i < 50; i++)
    {
        infile >> fiftyIntegers[i];
        cout << fiftyIntegers[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    selectionSort(fiftyIntegers, 50);

    element2(fiftyIntegers);

    infile.close();

    return 0;
}

void element2(const int fiftyInt[])
{
    int x, first, second;

    for(int i = 0; i < 50; i++) // check every integer value against others
    {
        x = fiftyInt[i];        // assign temporary value

        for(int j = 0; j < 50; j++)
        {
            first = 0;
            second = 0;

            if (x > fiftyInt[j])
                {
                    first = fiftyInt[j];

                    for(int k = 0; k < 50; k++)
                    {
                        if (x > fiftyInt[k])
                            second = fiftyInt[k];

                        if((first + second) == x)
                            cout << first << " + " << second << " = " << first + second << endl;
                    }
                }
        }
    }
}

void selectionSort(int list[], int length)
{
    int index;
    int smallestIndex;
    int location;
    int temp;

    for (index = 0; index < length - 1; index++)
    {
            smallestIndex = index;
    for (location = index + 1; location < length; location++)
        if (list[location] < list[smallestIndex])
        smallestIndex = location;
    temp = list[smallestIndex];
    list[smallestIndex] = list[index];
    list[index] = temp;
    }
}
