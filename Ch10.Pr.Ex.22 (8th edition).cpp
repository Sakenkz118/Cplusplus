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
    die die10[10];
    int desiredSum = 0;
    int countRolled;
    double probability = 0;
    int countMatched = 0;

    cout << "This program will roll 10 dies and sum the results of each die." << endl;
    cout << endl;

    cout << "Please enter the desired sum between 10 and 60 inclusively: ";
    cin >> desiredSum;

    if(desiredSum >= 10 && desiredSum <= 60)
    {
        cout << "Please indicate how many times the dice are to be rolled?: ";
        cin >> countRolled;
        cout << endl;

        if(countRolled > 0)
        {
            int sum;
            for (int i = 0; i < countRolled; i++)
            {
                sum = 0;

                for(int j = 0; j < 10; j++)
                {
                    die10[j].roll();
                    // cout << die10[j].getNum() << ", ";
                    sum += die10[j].getNum();
                }
                // cout << endl;

                if(sum == desiredSum)
                    countMatched++;

            }

            probability = (countMatched / static_cast<double>(countRolled)) * 100;

            cout << desiredSum << " occured " << countMatched << " time(s). ";
            cout << fixed << showpoint << setprecision(2);
            cout << "The probability for this to happen is " << probability << "%" << endl;
        }
        else
            cout << "Count cannot be negative number! Try again!" << endl;
    }
    else
        cout << "Invalid range value is entered! Try again." << endl;

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
