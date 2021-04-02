#include <iostream>

using namespace std;

int gcd(int, int);

int main ()
{
    int one, two, three;

    cout << "Please enter two nonzero integers: ";
    cin >> one >> two >> three;
    cout << endl;

    cout << "The greatest common divisor of " << one << " and " << two << " and " << three << " = " << gcd(gcd(one, two), three) << endl;

    return 0;
}

int gcd(int a, int b)
{
    int c;

    while(a % b > 0)
        {
            c = a % b;
            a = b;
            b = c;
        }
        return b;
}
