#include <iostream>

using namespace std;

int main ()
{
    double alpha[50] = {1};

    for (int i = 0; i < 25; i++)
    {
        alpha[i] = i * i;
    }

    for (int j = 25; j < 50; j++)
    {
        alpha[j] = 3 * j;
    }

    int counter = 0;
    for (int index = 0; index < 50; index++)
    {
        cout << alpha[index] << " ";
        counter++;
        if (counter == 10)
            {
                cout << endl;
                counter = 0;
            }
    }

    return 0;
}
