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

    int diff;

    num = (rand() + time(0)) % 100; //Line 1
    isGuessed = false; //Line 2

    while (!isGuessed && (counter <= 5)) //Line 3
        { //Line 4
            cout << "Enter an integer greater than or equal to 0 and less than 100: "; //Line 5
            cin >> guess; //Line 6
            cout << endl; //Line 7

            diff = abs(num - guess);

            if (diff == 0) //Line 8
                { //Line 9
                    cout << "You guessed the correct number:-)" << endl; //Line 10
                    cout << "You win!" << endl;
                    isGuessed = true; //Line 11
                } //Line 12
                else if (guess < num) //Line 13
                {
                    if((counter < 5) && (diff >= 50))
                    cout << "Your guess is very low.\n Guess again!" << endl; //Line 14
                    else if ((counter < 5) && (diff < 50) && (diff >= 30))
                        cout << "Your guess is low.\n Guess again" << endl;
                    else if ((counter < 5) && (diff < 30) && (diff >= 15))
                        cout << "Your guess is moderately low.\n Guess again" << endl;
                    else if ((counter < 5) && (diff < 15) && (diff > 0))
                        cout << "Your guess is somewhat low.\n Guess again" << endl;
                    else if((counter > 5) && (diff >= 50))
                    cout << "Your guess is very low." << endl; //Line 14
                    else if ((counter > 5) && (diff < 50) && (diff >= 30))
                        cout << "Your guess is low." << endl;
                    else if ((counter > 5) && (diff < 30) && (diff >= 15))
                        cout << "Your guess is moderately low." << endl;
                    else
                        cout << "Your guess is somewhat low." << endl;
                    counter++;
                }
                else //Line 15
                {
                    if((counter < 5) && (diff >= 50))
                    cout << "Your guess is very high.\n Guess again!" << endl; //Line 14
                    else if ((counter < 5) && (diff < 50) && (diff >= 30))
                        cout << "Your guess is high.\n Guess again!" << endl;
                    else if ((counter < 5) && (diff < 30) && (diff >= 15))
                        cout << "Your guess is moderately high.\n Guess again!" << endl;
                    else if ((counter < 5) && (diff < 15) && (diff > 0))
                        cout << "Your guess is somewhat high.\n Guess again!" << endl;
                    else if((counter > 5) && (diff >= 50))
                    cout << "Your guess is very high." << endl; //Line 14
                    else if ((counter > 5) && (diff < 50) && (diff >= 30))
                        cout << "Your guess is high." << endl;
                    else if ((counter > 5) && (diff < 30) && (diff >= 15))
                        cout << "Your guess is moderately high." << endl;
                    else
                        cout << "Your guess is somewhat high." << endl;
                    counter++;
                }
                if (counter > 5)
                    cout << "You lose!" << endl;
        }
     //end while //Line 17
    return 0;
}
