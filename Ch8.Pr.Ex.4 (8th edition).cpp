#include <iostream>
#include <fstream>

using namespace std;

void getData (int scores[], int& ArraySize, ifstream& input, int cat[]);
void calculateRanges (int calculate[], int cat[8]);

int main ()
{
    ifstream infile;
    int arraySize = 10;
    int categories[8] = {0};
    int testScores[arraySize] = {0};

    cout << "Processing data" << endl;
    cout << endl;

    infile.open("c:\\C++\\Ch8_Ex4Data.txt");

    getData(testScores, arraySize, infile, categories);

    cout << endl;

    cout << "0-24  25-49  50-74  75-99  100-124  125-149  150-174  175-200" << endl;

    for (int i = 0; i < 8; i++)
        cout << categories[i] << "       ";

    infile.close();

    return 0;
}

void getData (int scores[], int& ArraySize, ifstream& input, int cat[])
{
    cout << "The students' test scores: ";
    int i;
    while (!input.eof())
    {
            i = 0;
            input >> scores[i];
            calculateRanges(scores, cat);

            cout << scores[i] << " ";

            if (scores[i] > 200 || scores[i] < 0)
            {
                cout << endl;
                cout << "Student score is outside of the range 0-200. Program terminates. " << endl;
                break;
            }

            i++;
    }

    cout << endl;
}

void calculateRanges (int calculate[], int cat[8])
{
    int i = 0;

    if (calculate[i] >= 0 && calculate[i] <= 24)
        cat[0]++;
    else if (calculate[i] >= 25 && calculate[i] <= 49)
        cat[1]++;
    else if (calculate[i] >= 50 && calculate[i] <= 74)
        cat[2]++;
    else if (calculate[i] >= 75 && calculate[i] <= 99)
        cat[3]++;
    else if (calculate[i] >= 100 && calculate[i] <= 124)
        cat[4]++;
    else if (calculate[i] >= 125 && calculate[i] <= 149)
        cat[5]++;
    else if (calculate[i] >= 150 && calculate[i] <= 174)
        cat[6]++;
    else if (calculate[i] >= 175 && calculate[i] <= 200)
        cat[7]++;
}

