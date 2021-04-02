#include <iostream>

using namespace std;

int smallestIndex (const int arrayTest[], int sizeArray);

int main ()
{
    int smallArray[8] = {3,5,4,2,1};

    cout << smallestIndex(smallArray,8);
    cout << endl;

    return 0;
}

int smallestIndex (const int arrayTest[], int sizeArray)
{
    int minIndex = 0;

    for (int i = 1; i < sizeArray; i++)
    {
        if (arrayTest[i] < arrayTest[minIndex])
        {
            minIndex = i;
            return minIndex;
        }
    }

    return minIndex;
}
