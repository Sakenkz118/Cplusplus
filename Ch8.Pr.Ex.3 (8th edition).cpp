#include <iostream>

using namespace std;

int lastLargestIndex (const int arrayTest[], int sizeArray);

int main ()
{
    int smallArray[8] = {3,3,4,2,1};

    cout << lastLargestIndex(smallArray,8);
    cout << endl;

    return 0;
}

int lastLargestIndex (const int arrayTest[], int sizeArray)
{
    int maxIndex = 0;

    for (int i = 1; i < sizeArray; i++)
    {
        if (arrayTest[i] > arrayTest[maxIndex])
        {
            maxIndex = i;
        }
    }

    return maxIndex;
}
