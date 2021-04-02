//Flag-controlled while loop.
//Number guessing game.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //declare the variables
    int num; //variable to store the random
    //number
    int guess; //variable to store the number
    //guessed by the user
    bool isGuessed; //boolean variable to control
    //the loop
    int counter = 1;

    num = (rand() + time(0)) % 100; //Line 1
    isGuessed = false; //Line 2

    while (!isGuessed && (counter <= 5)) //Line 3
        { //Line 4
            cout << "Enter an integer greater than or equal to 0 and less than 100: "; //Line 5
            cin >> guess; //Line 6
            cout << endl; //Line 7

            if (guess == num) //Line 8
                { //Line 9
                    cout << "You guessed the correct number:-)" << endl; //Line 10
                    cout << "You win!" << endl;
                    isGuessed = true; //Line 11
                } //Line 12
                else if (guess < num) //Line 13
                {
                    if(counter < 5)
                    cout << "Your guess is lower than the number.\n Guess again!" << endl; //Line 14
                    else
                        cout << "Your guess is lower than the number." << endl;
                    counter++;
                }
                else //Line 15
                {
                    if(counter < 5)
                    cout << "Your guess is higher than the number.\n Guess again!" << endl; //Line 16
                    else
                        cout << "Your guess is higher than the number." << endl;
                    counter++;
                }
                if (counter > 5)
                    cout << "You lose!" << endl;
        }
     //end while //Line 17
    return 0;
}
