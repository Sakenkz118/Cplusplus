#include <iostream>

using namespace std;

int main ()
{
    int num;
    int factorial = 1;
    double e = 0;

    cout << "Please enter a non-negative number: ";
    cin >> num;
    cout << endl;

    if (num == 0 || num == 1)
        cout << "e = " << 2 << endl;
    else if (num > 1)
    {
        for (int i = 2; i <= num; i++)
        {
            factorial = factorial * i;
            e = e + (1 / static_cast<double>(factorial));
        }
    cout << "e = " << e + 2 << endl;
    }
    else
        cout << "Please enter a non-negative number!" << endl;

    return 0;
}
