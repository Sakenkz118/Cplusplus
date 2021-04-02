#include <iostream>
#include <fstream>

using namespace std;

void element2(const int fiftyInt[]);

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
