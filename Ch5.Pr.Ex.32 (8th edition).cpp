#include <iostream>

using namespace std;

int main ()
{
    double n;
    double dividor;
    double sum = 0;

    cout << "Please enter a non-negative integer greater than 1: ";
    cin >> n;
    cout << endl;

    if (n <= 1)
        cout << "Please enter a proper number!" << endl;
    else
    {
        dividor = (n - 1) + ((n - 1) / (n + n));

        for (int i = n - 1; i > 1; i--)
        {
            dividor = (i - 1) + ((i - 1) / dividor);
        }
        cout << "e = " << 2 + 1 / dividor << endl;
    }

    return 0;
}
