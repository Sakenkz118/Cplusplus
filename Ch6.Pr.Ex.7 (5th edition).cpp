//Program: Roll dice
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice(int num);

int main()
{
    int sum;

    cout << "Please enter the desired sum of dices: ";
    cin >> sum;
    cout << endl;
    while (cin)
    {
    if (sum >= 2 && sum <= 12)
    cout << "The number of times the dice are rolled to get the sum " << sum << " = " << rollDice(sum) << endl;
    else
        cout << "Wrong input!" << endl;
    cout << endl;

    cout << "Please enter the desired sum of dices: ";
    cin >> sum;
    cout << endl;
    }

return 0;
}

int rollDice(int num)
{
    int die1;
    int die2;
    int sum;
    int rollCount = 0;
    srand(time(0));

    do
    {
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
    sum = die1 + die2;
    rollCount++;
    }
    while (sum != num);

    return rollCount;
}
