#include <iostream>

using namespace std;

int main()
{
    char letter;
    cout << "Program to convert uppercase and lowercase "
         << "letters to their corresponding "
         << "telephone digits." << endl;
    cout << "Enter letters: ";

        for (int i = 0; i < 7; i++)
                    {
                        cin >> letter;
                        if(i == 0)
                            cout << "The corresponding telephone " << "digits are: ";
                        if (i == 3)
                            cout << "-";/*
                        cout << "The letters you entered are: " << letter << endl;
                        */

             if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
                switch (letter)
                {
                    case 'A':
                    case 'B':
                    case 'C':
                    case 'a':
                    case 'b':
                    case 'c':
                        cout << "2";
                        break;
                    case 'D':
                    case 'E':
                    case 'F':
                    case 'd':
                    case 'e':
                    case 'f':
                        cout << "3";
                        break;
                    case 'G':
                    case 'H':
                    case 'I':
                    case 'g':
                    case 'h':
                    case 'i':
                        cout << "4";
                        break;
                    case 'J':
                    case 'K':
                    case 'L':
                    case 'j':
                    case 'k':
                    case 'l':
                        cout << "5";
                        break;
                    case 'M':
                    case 'N':
                    case 'O':
                    case 'm':
                    case 'n':
                    case 'o':
                        cout << "6";
                        break;
                    case 'P':
                    case 'Q':
                    case 'R':
                    case 'S':
                    case 'p':
                    case 'q':
                    case 'r':
                    case 's':
                        cout << "7";
                        break;
                    case 'T':
                    case 'U':
                    case 'V':
                    case 't':
                    case 'u':
                    case 'v':
                        cout << "8";
                        break;
                    case 'W':
                    case 'X':
                    case 'Y':
                    case 'Z':
                    case 'w':
                    case 'x':
                    case 'y':
                    case 'z':
                        cout << "9";
                }
                else
                    cout << "Invalid input." << endl;
            }

        cout << endl;

        return 0;
}
