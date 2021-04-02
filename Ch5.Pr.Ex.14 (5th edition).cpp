#include <iostream>

using namespace std;

int main ()
{
    int x, k = 0, ak;

    cout << "Please enter an integer x: ";
    cin >> x;
    cout << endl;

    ak = x;

    cout << ak << " ";

    while (ak != 1)
    {
        if (ak % 2 == 0)
        {
            ak = ak / 2;
        }
        else
            ak = 3 * ak + 1;

        cout << ak << " ";
        k++;
    }
    cout << endl;
    cout << "k = " << k << endl;

    return 0;
}
