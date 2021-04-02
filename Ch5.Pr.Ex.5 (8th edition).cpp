#include <iostream>

using namespace std;

int main ()
{
    int one, two;
    int countThree = 0, countFive = 0;

    cout << "Please enter two integers: ";
    cin >> one >> two;
    cout << endl;

    if (one == two)
    {
        countThree = 0;
        countFive = 0;
        cout << "There are no numbers in between that are multiples of 3 and 5!" << endl;
    }
    else if ((one < two) && (one > 0) && (two > 0))
    {
        for (int i = one; i <= two; i++)
        {
            if(i % 3 == 0)
                countThree++;
            if(i % 5 == 0)
                countFive++;

        }

        if (one == 0)
            {
                countThree = countThree - 1;
                countFive = countFive - 1;
            }

        cout << "There are " << countThree << " multiple(s) of 3, ";
        cout << countFive << " multiple(s) of 5." << endl;
    }
    else if ((one > two) && (one > 0) && (two > 0))
    {
        for (int i = two; i <= one; i++)
        {
            if(i % 3 == 0)
                countThree++;
            if(i % 5 == 0)
                countFive++;
        }

        if (two == 0)
            {
                countThree = countThree - 1;
                countFive = countFive - 1;
            }
        cout << "There are " << countThree << " multiple(s) of 3, ";
        cout << countFive << " multiple(s) of 5." << endl;
    }
    else if ((one < 0) || (two < 0))
        cout << "Entered number(s) cannot be negative!" << endl;

    return 0;
}
