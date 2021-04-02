#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string a, b, c;

    cout << "Please enter 3 strings: ";
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

    cout << endl;

    cout << "The values you entered are " << a << ", " << b << ", " << c << endl;

    cout << "Possible combinations are " << endl;
    cout << a << b << c << ", ";
    cout << a << c << b << ", ";
    cout << b << a << c << ", ";
    cout << b << c << a << ", ";
    cout << c << a << b << ", ";
    cout << c << b << a << endl;

    return 0;
}
