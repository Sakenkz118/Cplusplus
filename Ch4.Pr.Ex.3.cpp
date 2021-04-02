#include <iostream>

using namespace std;

int main ()
{
    int num;

    cout << "Please enter an integer between 0 and 35: ";
    cin >> num;
    cout << endl;

    if (num <= 9)
        cout << "Number is " << num << endl;
    else
        cout << "Number is " << static_cast<char>(num+55) << endl;


    return 0;
}
