#include <iostream>

using namespace std;

int main ()
{
    int x, k = 0, ak;
    int largest, index = 1;

    cout << "Please enter an integer x: ";
    cin >> x;
    cout << endl;

    ak = x;
    largest = ak;
    cout << ak << " ";

    while (ak != 1)
    {
        if (ak % 2 == 0)
            ak = ak / 2;
        else
            ak = 3 * ak + 1;

        if(largest < ak)
            largest = ak;

        cout << ak << " ";
        k++;
    }

    while (x != largest)
    {
        if (x % 2 == 0)
            x = x / 2;
        else
            x = 3 * x + 1;
        index++;
    }
    cout << endl;
    cout << endl;
    cout << "k = " << k << endl;
    cout << "The largest number is " << largest << endl;
    cout << "Its index is " << index << endl;

    return 0;
}
