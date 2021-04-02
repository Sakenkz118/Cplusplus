#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

class die
{
public:
    die();
    //Default constructor
    //Sets the default number rolled by a die to 1

    void roll();
    //Function to roll a die.
    //This function uses a random number generator to randomly
    //generate a number between 1 and 6, and stores the number
    //in the instance variable num.

    int getNum() const;
    //Function to return the number on the top face of the die.
    //Returns the value of the instance variable num.
private:
    int num;
};

int main()
{
    int dieCount = 6;
    die dieRolling[dieCount];
    int countRolled = 3000;
    int sumResults[countRolled] = {0};
    int sum;

    cout << "This program will roll " << dieCount << " dies and sum the results of each die." << endl;
    cout << endl;

    for (int i = 0; i < countRolled; i++)
    {
        sum = 0;
        for(int j = 0; j < dieCount; j++)
        {
            dieRolling[j].roll();
            sum += dieRolling[j].getNum();
        }
        sumResults[i] = sum;

        cout << i << " ";

        for(int k = 0; k < sumResults[i]; k++)
        {
            cout << "o";
        }

        cout << endl;
    }

    return 0;
}

die::die()
{
    num = 1;
    srand(time(0));
}

void die::roll()
{
    num = rand() % 6 + 1;
}

int die::getNum() const
{
    return num;
}

